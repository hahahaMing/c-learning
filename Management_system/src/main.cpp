#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "boss.h"
#include "manager.h"
#include "employee.h"

using namespace std;

int main() {
    //实例化管理者对象
    WorkerManager wm;
    int choice = 0;
    while (true) {
        //展示菜单
        wm.Show_Menu();
        cout << "" << endl;
        cin >> choice;
        switch (choice) {
            case 0://exit
                wm.exitSystem();
                break;
            case 1://add
                wm.Add_Emp();
                break;
            case 2://display
                wm.Show_Emp();
                break;
            case 3://delete
                wm.Del_Emp();
                break;
            case 4://change
                wm.Mod_Emp();
                break;
            case 5://search
                wm.Find_Emp();
                break;
            case 6://sort
                wm.Sort_Emp();
                break;
            case 7://clear
                wm.Clean_File();
                break;
            default:
                system("cls");
                break;
        }
    }
    return 0;
}