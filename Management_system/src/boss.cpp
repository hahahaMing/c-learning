//
// Created by ming on 2019/10/3.
//

#include "boss.h"
Boss::Boss(int id, string name, int dId){
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Boss::showInfo() {
    cout<<"id"<<this->m_Id
        <<"\tname:"<<this->m_Name
        <<"\tjob:"<<this->getDeptName()
        <<"\tduty:Manage all matters of the company"<<endl;
}

string Boss::getDeptName() {
    return string("boss");
}