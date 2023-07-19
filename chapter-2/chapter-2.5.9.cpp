//
// Created by mario on 2023/7/19.
//
//chapter-2.5.9
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s1[51];
char s2[51];
int main() {
    cin.getline(s1,50);
    cin.getline(s2,50);
    int result = strcmp(s1,s2);
    if (result>0){
        printf(">");
    } else if (result==0){
        printf("=");
    } else{
        printf("<");
    }
    return 0;
}
