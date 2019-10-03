//
// Created by ming on 2019/10/3.
//

#include "employee.h"
Employee::Employee(int id, string name, int dId) {
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Employee::showInfo() {
    cout<<"id"<<this->m_Id
        <<"\tname:"<<this->m_Name
        <<"\tjob:"<<this->getDeptName()
        <<"\tduty:Complete the task assigned by the manager"<<endl;
}

string Employee::getDeptName() {
    return string("employee");
}