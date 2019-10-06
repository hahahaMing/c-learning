#include "vector"
#include "algorithm"
#include "iostream"
using namespace std;

void myPrint(int val){
    cout<<val<<endl;
}

void test01(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);

    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd= v.end();//point the next location of the last one
    //First traversal method
    while(itBegin!=itEnd)
    {
        cout<<*itBegin<<endl;
        itBegin++;
    }
    //Second traversal method
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    //Third traversal method
    for_each(v.begin(),v.end(),myPrint);
}

int main(){
    test01();

    return 0;
}