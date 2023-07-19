//
// Created by mario on 2023/7/19.
//
// chapter-2.5.3
#include <cstdio>
int num[10][10]={0};
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d",&num[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d",num[i][j]);
            if(j!=(m-1)) printf(" ");
        }
        if(i!=(n-1)) printf("\n");
    }
    return 0;
}
