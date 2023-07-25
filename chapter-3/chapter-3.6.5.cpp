//
// Created by mario on 2023/7/25.
//
// chapter-3.6.5
#include <cstdio>
using namespace std;
int num = 0;
char word[110][15];
int main(){
    while (scanf("%s",word[num]) != EOF) num++;
    for (int i = 0; i < num; ++i) {
        word[i][0] = char (word[i][0] - 32);
        printf("%s",word[i]);
        if (i != num-1) printf(" ");
    }
    return 0;
}

/*#include <cstdio>
#include <cstring>

const int MAXN = 500;
const int MAXL = 11;
char str[MAXN][MAXL];
int num = 0;

int main() {
    while (scanf("%s", str[num]) != EOF) {
        num++;
    }
    for (int i = 0; i < num; i++) {
        int len = strlen(str[i]);
        printf("%c", str[i][0] + ('A' - 'a'));
        for (int j = 1; j < len; j++) {
            printf("%c", str[i][j]);
        }
        if (i < num - 1) {
            printf(" ");
        }
    }
    return 0;
}*/
