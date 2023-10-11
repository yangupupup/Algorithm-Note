//
// Created by mario on 2023/10/11.
//
// chapter-4.3.4
#include "iostream"
#include "cstring"

using namespace std;

string s;

void printCharacter(int n){
    if (n == 1) cout<<s[0];
    if (n >= 2) {
        cout<<s[n-1];
        printCharacter(n-1);
    }
}

int main(){
    cin>>s;
    printCharacter(s.length());
    return 0;
}
