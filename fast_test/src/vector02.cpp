#include "vector"
#include "algorithm"
#include "iostream"
#include "string"
using namespace std;

class Person
{
public:
    Person(string name,int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};
void test01(){
    vector<Person> v;
    Person p1("aaa",1);
    Person p2("bbb",2);
    Person p3("ccc",3);
    Person p4("ddd",4);
    Person p5("fff",5);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
        cout<<"name:"<<it->m_Name<<", age:"<<it->m_Age<<endl;
    }
}
void test02(){
    vector<Person*> v;
    Person p1("aaa",1);
    Person p2("bbb",2);
    Person p3("ccc",3);
    Person p4("ddd",4);
    Person p5("fff",5);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    for(vector<Person*>::iterator it=v.begin();it!=v.end();it++){
        cout<<"name:"<<(*it)->m_Name<<", age:"<<(*it)->m_Age<<endl;
    }

}
int main(){
//    test01();
    test02();
}