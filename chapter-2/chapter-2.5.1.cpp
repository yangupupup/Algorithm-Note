//
// Created by mario on 2023/7/19.
//
// chapter-2.5.1
#include <cstdio>
int num[10];
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d",num[i]);
        if(i!=(n-1)) printf(" ");
    }
    return 0;
}
