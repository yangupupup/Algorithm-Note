//
// Created by mario on 2023/10/11.
//
// chapter-4.3.1
#include "iostream"

using namespace std;

void solute(int n){
    if (n == 0) cout<<"我的小鲤鱼";
    if (n > 0) {
        cout<<"抱着";
        solute(n-1);
        cout<<"的我";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"吓得我抱起了";
    solute(n);
    return 0;
}