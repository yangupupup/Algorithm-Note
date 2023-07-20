//
// Created by mario on 2023/7/20.
//
// chapter-3.1.2
#include <iostream>
using namespace std;
int A,B,C;
int main(){
    cin>>A>>B>>C;
    if (A+B>C && A+C>B && B+C>A){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}
