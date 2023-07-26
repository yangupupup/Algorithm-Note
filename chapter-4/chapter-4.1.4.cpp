//
// Created by mario on 2023/7/26.
//
// chapter-4.1.1
#include <cstdio>
#include <algorithm>
#define MAX_LEN 50
using namespace std;
int cmp(int a,int b){
    return a>b;
}
int n;
int num[MAX_LEN]={0};
int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",num+i);
    }
    sort(num,num+n,cmp);
    for (int i = 0; i < n; ++i) {
        printf("%d",num[i]);
        if (i != n-1) printf(" ");
    }
    return 0;
}
