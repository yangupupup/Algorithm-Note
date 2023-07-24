//
// Created by mario on 2023/7/24.
//
// chapter-3.5.3
#include <iostream>
using namespace std;
int n;
int K;
int z[40]={0};
int num;
int main(){
    scanf("%d%d",&n,&K);
    do {
        z[num++] = n % K;
        n = n / K;
    } while (n);
    for (int i = num-1; i >= 0; --i) {
        switch (z[i]) {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d",z[i]);
                break;
        }
    }
    return 0;
}
