//
// Created by mario on 2023/7/19.
//
// chapter-2.5.5
#include <cstdio>
#include <cstring>
int A[10];
int main() {
    int x;
    scanf("%d",&x);
    memset(A,x,sizeof A);
    printf("%d",A[0]);
    return 0;
}
