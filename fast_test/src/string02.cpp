#include "iostream"
#include "string"
using namespace std;


void test01(){
    string str1 ="hello world";
    cout<<str1<<endl;
    string str2 = str1;
    cout<<str2<<endl;
    string str3 ;
    str3 = 'a';
    cout<<str3<<endl;
    string str4 ;
    str4.assign("hello C++");
    cout<<str4<<endl;
    string str5 ;
    str5.assign("hello C++",4);//赋值前4个
    cout<<str5<<endl;
    string str6 ;
    str6.assign(str4);
    cout<<str6<<endl;
    string str7 ;
    str7.assign(10,'w');
    cout<<str7<<endl;
}


int main(){
    test01();

    return 0;
}