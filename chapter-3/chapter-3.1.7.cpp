//
// Created by mario on 2023/7/20.
//
// chapter-3.1.7
#include <iostream>
using namespace std;
int a,b;
int number[900]={0};
bool flag = false;
int quantity =0;
bool isNeed(int n){
    int temp[3]={0};
    int i=0;
    int m = n;
    while (m){
        temp[i++] = m % 10;
        m = m / 10;
    }
    int sum = 0;
    for (int j = 0; j < i; ++j) {
        sum += temp[j] * temp[j] * temp[j];
    }

    if (sum == n) {
        return true;
    } else {
        return false;
    }
}
int main(){
    cin>>a>>b;
    for (int i = a; i <=b; ++i) {
        if (isNeed(i)){
            number[quantity++] = i;
        }
    }
    if (quantity == 0){
        cout<<"NO";
        return 0;
    }
    for (int i = 0; i < quantity; ++i) {
        cout<<number[i];
        if (i != quantity-1) cout<<" ";
    }
    return 0;
}
