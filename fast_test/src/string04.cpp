#include "iostream"
#include "string"
using namespace std;


void test01(){
    string str1 ="abcdefde";
    cout<<str1<<endl;
    int pos = str1.rfind("de");//返回索引，从0开始找到第一个，没有返回-1
    cout<<pos<<endl;
    pos = str1.find("de");//反向搜索返回索引找到第一个
    cout<<pos<<endl;
}

void test02(){
    string str1 ="abcdefde";
    cout<<str1<<endl;
    str1.replace(1,3,"1111");
    cout<<str1<<endl;
}


int main(){
    test01();
    test02();

    return 0;
}