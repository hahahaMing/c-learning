//
// Created by ming on 2019/10/3.
//

#include "manager.h"
Manager::Manager(int id, string name, int dId){
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Manager::showInfo() {
    cout<<"id"<<this->m_Id
        <<"\tname:"<<this->m_Name
        <<"\tjob:"<<this->getDeptName()
        <<"\tduty:Complete the task assigned by the boss and issue the task to the employee"<<endl;
}

string Manager::getDeptName() {
    return string("manager");
}