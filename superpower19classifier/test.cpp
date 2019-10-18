#include <chrono>
#include <future>  // Use std::async => MultiThreading
//#include <thread>
#include "classifier.hpp"

class timer
{
public:
	using clk_t = std::chrono::high_resolution_clock;
    timer() : t(clk_t::now()) {}
    void reset(){  t = clk_t::now(); }

    double milli_cnt() const
    {
        return std::chrono::duration<double, std::milli>(clk_t::now() - t).count();
    }

private:
    clk_t::time_point t;
}; // class timer

std::vector<cv::Mat> get_test_src(const std::string& where)
{
	std::vector<cv::Mat> ret;
	DIR* dir_ptr = opendir(where.c_str());
	dirent* dptr;
	while((dptr = readdir(dir_ptr)) != NULL)
	{
		if(dptr->d_name[0] == '.')
			continue;
		ret.push_back(cv::imread(where+'/'+dptr->d_name, cv::IMREAD_GRAYSCALE));
	}
	return ret;
}
void good_test(sp::classifier classifier,std::vector<cv::Mat> goods ,int &goods_right){

    for(auto&& x : goods)
        goods_right += classifier.boolean_forward(x);
}
void bad_test(sp::classifier classifier,std::vector<cv::Mat> bads,int &bads_right){

    for(auto&& x : bads )
        bads_right  += !classifier.boolean_forward(x);
}

int main()
{
	sp::classifier classifier("../armor");
	// classifier.debug_prepared_show(cv::imread("../armor/positive/T2.png", cv::IMREAD_GRAYSCALE));
	// cv::waitKey();
    auto goods = get_test_src("../data/positive");
	auto bads  = get_test_src("../data/negative");

	int total = goods.size() + bads.size();
	int goods_right = 0;
	int bads_right  = 0;

	// @@@ test time.
	timer t;
//    good_test(classifier,goods,goods_right);
//    bad_test(classifier,bads,bads_right);

    std::thread thr1(good_test,classifier,goods,std::ref(goods_right));
    std::thread thr2(bad_test,classifier,bads,std::ref(bads_right));
    thr1.join();
    thr2.join();

	std::cout << "Average bench time: " << t.milli_cnt() / total << " ms\n";

	std::cout << "goods right: " << goods_right << " / " << goods.size() << " ~ " << static_cast<double>(goods_right) / goods.size() * 100 << " %\n";
	std::cout << "bads  right: " << bads_right  << " / " << bads.size()  << " ~ " << static_cast<double>(bads_right )  / bads.size() * 100<< " %\n";
	std::cout << "Total accuracy: " << static_cast<double>(goods_right + bads_right) / total * 100 << " %\n";

}