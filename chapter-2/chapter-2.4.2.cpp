//
// Created by mario on 2023/7/19.
//
// chapter-2.4.2
#include <cstdio>
int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum+=i;
        if(sum>2000){
            break;
        }
    }
    printf("%d",sum);
    return 0;
}