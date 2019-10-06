#include "iostream"
#include "vector"

using namespace std;

void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    vector<int> v3(10, 100);
    printVector(v3);

    vector<int> v4(v3);
    printVector(v4);

    vector<int> v5;
    v5 = v1;
    printVector(v5);

    vector<int> v6;
    v6.assign(v1.begin(), v1.end());
    printVector(v6);

    vector<int> v7;
    v7.assign(10, 100);
    printVector(v7);

}

void test02() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    cout << v1.empty() << endl;
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;

    v1.resize(15, 100);
//    v1.resize(15);
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    printVector(v1);

    v1.resize(5);
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    printVector(v1);

}

void test03() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    v1.pop_back();
    printVector(v1);

    v1.insert(v1.begin(), 100);
    printVector(v1);

    v1.insert(v1.begin(), 2, 1000);
    printVector(v1);

    v1.erase(v1.begin());
    printVector(v1);

    v1.erase(v1.begin(), v1.end());
    printVector(v1);

    v1.clear();
    printVector(v1);


}

void test04() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) << " " << v1[i] << " " << endl;
    }
    cout << v1.front() << " " << v1.back() << endl;
}

void test05() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v2.push_back(10 - i);
    }
    printVector(v2);

    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

void swap_test() {
    vector<int> v1;
    for (int i = 0; i < 100000; i++) {
        v1.push_back(i);
    }
    cout << "capacity:" << v1.capacity() << endl;
    cout << "size:" << v1.size() << endl;

    v1.resize(3);
    cout << "capacity:" << v1.capacity() << endl;
    cout << "size:" << v1.size() << endl;

    //拷贝构造匿名对象调用swap
    //匿名对象调用结束空间回收
    vector<int>(v1).swap(v1);
    cout << "capacity:" << v1.capacity() << endl;
    cout << "size:" << v1.size() << endl;

}

void test06() {
    vector<int> v1;
    int *p = NULL;
    int num = 0;
    for (int i = 0; i < 100000; i++) {
        v1.push_back(i);
        if (p != &v1[0]) {
            p = &v1[0];
            num++;
        }
    }
    cout<<num<<endl;

    //reserve
    vector<int> v2;
    v2.reserve(100000);
    *p = NULL;
    num = 0;
    for (int i = 0; i < 100000; i++) {
        v2.push_back(i);
        if (p != &v2[0]) {
            p = &v2[0];
            num++;
        }
    }
    cout<<num<<endl;
}

int main() {
//    test01();
//    test02();
//    test03();
//    test04();
//    test05();
//    swap_test();
    test06();
}
