#include "iostream"
#include "string"
using namespace std;


void test01(){
    string str1 ="hello";
    cout<<str1<<endl;
    string str2 = "hello";
    cout<<str2<<endl;
    cout<<str1.compare(str2)<<endl;

}

void test02(){
    string str1 ="abcdefde";
    cout<<str1<<endl;
    cout<<str1[2]<<endl;
    cout<<str1.at(3)<<endl;
    cout<<str1.size()<<endl;
    str1.at(2)='a';
    cout<<str1<<endl;
}
void test03(){
    string str = "hello";
    cout<<str<<endl;
    str.insert(1,"111");
    cout<<str<<endl;
    str.erase(1,3);
    cout<<str<<endl;
}

void test04(){
    string str = "hello";
    cout<<str<<endl;
    string sub = str.substr(1,3);
    cout<<sub<<endl;
    str = "zhangsan@sina.com";
    cout<<str<<endl;
    int pos = str.find("@");
    sub = str.substr(0,pos);
    cout<<sub<<endl;
}

int main(){
//    test01();
//    test02();
//    test03();
    test04();

    return 0;
}