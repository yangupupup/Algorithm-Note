//
// Created by mario on 2023/7/25.
//
// chapter-3.6.3
#include <cstdio>
#include <cstring>

const int MAXN = 500;
const int MAXL = 11;
char str[MAXN][MAXL], num = 0;
int len;
int main() {
    while (scanf("%s", str[num]) != EOF) {
        num++;
    }
    for (int i = 0; i < num; i++) {
        len = strlen(str[i]);
        for (int j = len-1; j >= 0; --j) {
            printf("%c", str[i][j]);
        }
        if (i != num-1) {
            printf(" ");
        }
    }
    return 0;
}
