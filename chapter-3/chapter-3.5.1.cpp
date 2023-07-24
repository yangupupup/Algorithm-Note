//
// Created by mario on 2023/7/24.
//
// chapter-3.5.1
#include <iostream>
using namespace std;
int n;
int z[40]={0};
int num=0;
int main(){
    cin>>n;
    do {
        z[num++] = n % 2;
        n = n / 2;
    } while (n);
    for (int i = num-1; i >= 0; --i) {
        cout<<z[i];
    }
    return 0;
}
