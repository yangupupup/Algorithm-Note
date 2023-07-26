//
// Created by mario on 2023/7/26.
//
// chapter-4.1.10
#include <cstdio>
#include <algorithm>
using namespace std;
int n;
int scores[1000] = {0};
int cmp(int a,int b){
    return a>b;
}
int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) scanf("%d",scores+i);
    sort(scores,scores+n,cmp);
    int r = 1;
    for (int i = 0; i < n; ++i) {
        if (i > 0 && scores[i] != scores[i-1]){
            r = i+1;
        }
        printf("%d %d\n",scores[i],r);
    }
    return 0;
}
