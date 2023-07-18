//
// Created by mario on 2023/7/18.
//
//chapter-2.2.12
#include <cstdio>
int main() {
    int n;
    char c;
    scanf("%d",&n);
    getchar();
    c = getchar();
    getchar();
    printf("%d\n",++n);
    printf("%c",c);
    return 0;
}