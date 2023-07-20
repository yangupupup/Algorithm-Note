//
// Created by mario on 2023/7/20.
//
// chapter-2.10.7
#include <iostream>
#define MAX_LEN 10
using namespace std;
int num[MAX_LEN]={0};
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",num+i);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d",num[i]+1);
        if (i!=(n-1)) printf(" ");
    }
    return 0;
}
