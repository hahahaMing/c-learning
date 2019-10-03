//
// Created by ming on 2019/10/3.
//
#include "workerManager.h"

WorkerManager::WorkerManager() {
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    //init attributes
    // no file exists
    if (!ifs.is_open()) {
        cout << "no file exist" << endl;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        this->m_EmpArray = NULL;
        ifs.close();
        return;
    }
    //file exists but is empty
    char ch;
    ifs >> ch;
    if (ifs.eof()) {
        cout << "file is empty" << endl;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        this->m_EmpArray = NULL;
        ifs.close();
        return;
    }
    //file exists and is not empty
    int num = this->get_EmpNum();
    cout << "num exists is " << num << endl;
    this->m_EmpNum = num;
    this->m_FileIsEmpty = false;
    //create space
    this->m_EmpArray = new Worker *[this->m_EmpNum];
    //put data into the array form the file
    this->init_Emp();
    for (int i = 0; i < this->m_EmpNum; i++) {
        cout << "id:" << this->m_EmpArray[i]->m_Id << " "
             << "name:" << this->m_EmpArray[i]->m_Name << " "
             << "did:" << this->m_EmpArray[i]->m_DeptId << endl;
    }
}


//展示菜单
void WorkerManager::Show_Menu() {
    cout << "welcome" << endl;
    cout << "0 exit" << endl;
    cout << "1 add" << endl;
    cout << "2 display" << endl;
    cout << "3 delete" << endl;
    cout << "4 change" << endl;
    cout << "5 search" << endl;
    cout << "6 sort" << endl;
    cout << "7 clear" << endl << endl;
}

//exit
void WorkerManager::exitSystem() {
    cout << "welcome next usage" << endl;
//    system("pause");
    exit(0);
}

void WorkerManager::Add_Emp() {
    cout << "please cin number to add:" << endl;
    int addNum = 0;
    cin >> addNum;
    if (addNum > 0) {
        //添加
        //计算添加空间大小
        int newSize = this->m_EmpNum + addNum;
        //开辟新空间
        Worker **newSpace = new Worker *[newSize];
        //将原来空间下的数据拷贝到新空间下
        if (this->m_EmpArray != NULL) {
            for (int i = 0; i < this->m_EmpNum; i++) {
                newSpace[i] = this->m_EmpArray[i];
            }
        }
        //批量添加新数据
        for (int i = 0; i < addNum; i++) {
            int id;
            string name;
            int dSelect;

            cout << "cin the " << i + 1 << "st id" << endl;
            cin >> id;
            cout << "cin the " << i + 1 << "st name" << endl;
            cin >> name;
            cout << "choose the job:1.em 2.mg 3.bs" << endl;
            cin >> dSelect;

            Worker *worker = NULL;
            switch (dSelect) {
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Manager(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;
                default:
                    break;
            }
            newSpace[this->m_EmpNum + i] = worker;
        }
        delete[] this->m_EmpArray;
        this->m_EmpArray = newSpace;
        this->m_EmpNum = newSize;
        this->m_FileIsEmpty = false;
        cout << "add successfully" << endl;
        this->save();
    } else {
        cout << "cin error" << endl;
    }
    system("cls");
}

void WorkerManager::save() {
    ofstream ofs;
    ofs.open(FILENAME, ios::out);
    for (int i = 0; i < this->m_EmpNum; i++) {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DeptId << endl;
    }
    ofs.close();
}

int WorkerManager::get_EmpNum() {
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;
    int num = 0;
    while (ifs >> id && ifs >> name && ifs >> dId) {
        //record num
        num++;
    }
    ifs.close();
    return num;
}

void WorkerManager::init_Emp() {
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int dId;
    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> dId) {
        Worker *worker = NULL;
        if (dId == 1) {
            worker = new Employee(id, name, dId);
        } else if (dId == 2) {
            worker = new Manager(id, name, dId);
        } else {
            worker = new Boss(id, name, dId);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }
}

void WorkerManager::Show_Emp() {
    if (this->m_FileIsEmpty) {
        cout << "file is not exist or is empty" << endl;
    } else {
        for (int i = 0; i < m_EmpNum; i++) {
            this->m_EmpArray[i]->showInfo();
        }
    }
}

void WorkerManager::Del_Emp() {
    if (this->m_FileIsEmpty) {
        cout << "file is not exist or is empty" << endl;
    } else {
        cout << "cin the id you want to delete" << endl;
        int id;
        cin >> id;

        int index = this->IsExist(id);
        if (index != -1) {
            for (int i = index; i < this->m_EmpNum - 1; i++) {
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];
            }
            this->m_EmpNum--;
            //update to file
            this->save();
            cout << "delete successfully" << endl;
        } else {
            cout << "id doesn't exist" << endl;
        }
    }
}

int WorkerManager::IsExist(int id) {
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; i++) {
        if (this->m_EmpArray[i]->m_Id == id) {
            index = i;
            break;
        }
    }
    return index;
}

void WorkerManager::Mod_Emp() {
    if (this->m_FileIsEmpty) {
        cout << "file is not exist or is empty" << endl;
    } else {
        cout << "cin the id you want to modify" << endl;
        int id;
        cin >> id;

        int index = this->IsExist(id);
        if (index != -1) {
            delete this->m_EmpArray[index];
            int newId = 0;
            string newName = "";
            int dSelect = 0;
            cout << "find:" << id << ", cin the new id:" << endl;
            cin >> newId;
            cout << "cin the new name:" << endl;
            cin >> newName;
            cout << "cin the new job(1 ep 2 mg 3 bs):" << endl;
            cin >> dSelect;
            Worker *worker = NULL;
            switch (dSelect) {
                case 1:
                    worker = new Employee(newId, newName, dSelect);
                    break;
                case 2:
                    worker = new Manager(newId, newName, dSelect);
                    break;
                case 3:
                    worker = new Boss(newId, newName, dSelect);
                    break;
                default:
                    break;
            }
            this->m_EmpArray[index] = worker;

            //update to file
            this->save();
            cout << "modify successfully" << endl;
        } else {
            cout << "id doesn't exist" << endl;
        }
    }
}

void WorkerManager::Find_Emp() {
    if (this->m_FileIsEmpty) {
        cout << "file is not exist or is empty" << endl;
    } else {
        cout << "cin the method to find(1 id,2 name)" << endl;
        int select = 0;
        cin >> select;
        if (select == 1) {
            cout << "cin the id you want to find" << endl;
            int id;
            cin >> id;

            int index = this->IsExist(id);
            if (index != -1) {
                cout << "found" << endl;
                this->m_EmpArray[index]->showInfo();
            } else {
                cout << "id doesn't exist" << endl;
            }
        } else if (select == 2) {
            string name;
            cout << "cin name" << endl;
            cin >> name;
            bool flag = false;
            for (int i = 0; i < this->m_EmpNum; i++) {
                if (this->m_EmpArray[i]->m_Name == name) {
                    cout << "found id is" << this->m_EmpArray[i]->m_Id << endl;
                    this->m_EmpArray[i]->showInfo();
                    flag = true;
                }
            }
            if (!flag) {
                cout << "nobody named " << name << " here" << endl;
            }
        } else {
            cout << "cin wrong" << endl;
        }
    }
}

void WorkerManager::Sort_Emp() {
    if (this->m_FileIsEmpty) {
        cout << "file is not exist or is empty" << endl;
    } else {
        cout << "cin the method to sort(1 ascending,2 descending)" << endl;
        int select = 0;
        cin >> select;
        for (int i = 0; i < m_EmpNum; i++) {
            int minOrMax = i;
            for (int j = i + 1; j < m_EmpNum; j++) {
                if (select == 1) {
                    if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)minOrMax = j;
                } else {
                    if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)minOrMax = j;
                }
            }
            if (i != minOrMax) {
                Worker *temp = this->m_EmpArray[i];
                this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
                this->m_EmpArray[minOrMax] = temp;
            }
        }
        cout << "sort ok" << endl;
        this->save();
        this->Show_Emp();
    }
}

void WorkerManager::Clean_File() {
    cout << "confirm do clean?(1 Y, 2 N)" << endl;
    int select = 0;
    cin >> select;
    if (select == 1) {
        ofstream ofs(FILENAME, ios::trunc);
        ofs.close();
        if (this->m_EmpArray != NULL) {
            for (int i = 0; i < this->m_EmpNum; i++) {
                if (this->m_EmpArray[i] != NULL) {
                    delete this->m_EmpArray[i];
                }
            }
        }
        this->m_EmpNum = 0;
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
        this->m_FileIsEmpty = true;
        cout << "clean ok" << endl;
    }
}


WorkerManager::~WorkerManager() {
    if (this->m_EmpArray != NULL) {
        for (int i = 0; i < this->m_EmpNum; i++) {
            if (this->m_EmpArray[i] != NULL) {
                delete this->m_EmpArray[i];
            }
        }
    }
    delete[] this->m_EmpArray;
    this->m_EmpArray = NULL;
}


