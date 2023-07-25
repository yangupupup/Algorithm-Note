//
// Created by mario on 2023/7/25.
//
// chapter-3.6.4
#include <iostream>
using namespace std;
char words[100][11];
int num=0;
int main(){
    while (scanf("%s",words[num]) != EOF) num++;
    cout<<num;
    return 0;
}

