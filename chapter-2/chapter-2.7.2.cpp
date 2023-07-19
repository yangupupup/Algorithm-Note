//
// Created by mario on 2023/7/19.
//
// chapter-2.7.2
#include <iostream>
using namespace std;
void increase(int &x){
    x++;
}
int main() {
    int n;
    cin>>n;
    increase(n);
    cout<<n;
    return 0;
}
