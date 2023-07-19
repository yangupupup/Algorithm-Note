//
// Created by mario on 2023/7/19.
//
// chapter-2.5.7
#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_LEN = 51;
char str[MAX_LEN];

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // 或者使用 cin.get()
    for (int i = 0; i < n; i++) {
        cin.getline(str, MAX_LEN);
        puts(str);
    }
    return 0;
}
