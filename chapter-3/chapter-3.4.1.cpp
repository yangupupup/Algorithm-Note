//
// Created by mario on 2023/7/21.
//
// chapter-3.4.1
#include <iostream>
using namespace std;
int n;
bool isLeapYear(int year){
    return ((year % 4 == 0 && year % 100 !=0) || (year % 400 ==0));
}
int main(){
    cin>>n;
    if (isLeapYear(n)){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
