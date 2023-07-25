//
// Created by mario on 2023/7/25.
//
// chapter-3.6.2
/**
 * 采用的是奇巧淫技
 * 如果是利用cin.getLine 没理由有问题啊？
 */
#include <cstdio>

const int MAXN = 500;
const int MAXL = 11;
char str[MAXN][MAXL], num = 0;

int main() {
    while (scanf("%s", str[num]) != EOF) {
        num++;
    }
    for (int i = num - 1; i >= 0; i--) {
        printf("%s", str[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    return 0;
}