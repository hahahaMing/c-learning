#pragma once

#include "iostream"
#include "string"
using namespace std;

class Worker
{
public:
    //show identity
    virtual void showInfo()=0;//虚函数，地址晚绑定，找到最近对象里面的同名函数，实函数编译时绑定地址，调用父类函数。
    //get job name
    virtual string getDeptName()=0;

    int m_Id;//worker's id number
    string m_Name;//worker's name
    int m_DeptId;//department number
};