//
// Created by mario on 2023/7/19.
//
// chapter-2.6.3
#include <iostream>
using namespace std;
int max2(int a, int b){
    return a>b?a:b;
}
int max3(int a, int b, int c){
    return max(a,b)>c? max(a,b):c;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max3(a,b,c);
    return 0;
}