//
// Created by mario on 2023/7/19.
//
// chapter-2.8.2
#include <iostream>
#include <cstring>
using namespace std;
struct Student {
    int id;
    char name[15];
    Student(int _id,char* _name){
        id = _id;
        strcpy(name,_name);
    }
};
int main() {
    int id;
    char name[15];
    cin>>id>>name;
    Student student = Student(id,name);
    cout<<student.id<<endl<<student.name;
    return 0;
}
