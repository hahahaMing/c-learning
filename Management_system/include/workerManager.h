#pragma once
#define FILENAME "empFile.txt"

#include "iostream"

using namespace std;

#include "fstream"

#include "worker.h"
#include "boss.h"
#include "manager.h"
#include "employee.h"

class WorkerManager {
public:

    //构造函数
    WorkerManager();

    //展示菜单
    void Show_Menu();

    //exit
    void exitSystem();

    //record number of employees
    int m_EmpNum;
    //employee array ptr
    Worker **m_EmpArray;

    //append
    void Add_Emp();

    void save();

    bool m_FileIsEmpty;

    int get_EmpNum();

    void init_Emp();

    void Show_Emp();

    void Del_Emp();

    int IsExist(int id);

    void Mod_Emp();

    void Find_Emp();

    void Sort_Emp();

    void Clean_File();


    //析构函数
    ~WorkerManager();
};