//
// Created by mario on 2023/7/19.
//
//chapter-2.4.5
#include <cstdio>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d",j);
            if(j!=i) printf(" ");
        }
        if(i!=n) printf("\n");
    }
    return 0;
}
