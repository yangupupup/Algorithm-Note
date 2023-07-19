//
// Created by mario on 2023/7/19.
//
// chapter-2.4.4
#include <cstdio>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%d",j);
            if(j!=n) printf(" ");
        }
        if(i!=(n-1)) printf("\n");
    }
    return 0;
}
