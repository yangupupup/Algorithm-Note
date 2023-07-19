//
// Created by mario on 2023/7/19.
//
//chapter-2.3.2
#include <cstdio>
int main() {
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Negative Number");
    } else{
        if(n%2==1){
            printf("Odd Number");
        } else{
            printf("Even Number");
        }
    }
    return 0;
}