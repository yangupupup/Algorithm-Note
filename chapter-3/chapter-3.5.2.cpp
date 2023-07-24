//
// Created by mario on 2023/7/24.
//
// chapter-3.5.2
#include <iostream>
using namespace std;
int num;
int main(){
    cin>>num;
    int y = 0,product =1;
    while (num){
        y = y + (num % 10) * product;
        num = num / 10;
        product = product * 2;
    }
    cout<<y;
    return 0;
}