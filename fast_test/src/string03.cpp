#include "iostream"
#include "string"
using namespace std;


void test01(){
    string str1 ="hello world";
    cout<<str1<<endl;
    str1+="!!";
    cout<<str1<<endl;
    str1+='~';
    cout<<str1<<endl;
    string str2="lol olo";
    str1+=str2;
    cout<<str1<<endl;
    str1.append("love");
    cout<<str1<<endl;
    str1.append("abcd",3);
    cout<<str1<<endl;
    str1.append(str2);
    cout<<str1<<endl;
    str1.append(str2,4,3);//从第4个开始截取3个接上
    cout<<str1<<endl;


}


int main(){
    test01();

    return 0;
}