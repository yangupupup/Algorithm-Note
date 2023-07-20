//
// Created by mario on 2023/7/20.
//
//chapter-2.10.6
#include <iostream>
using namespace std;
int main() {
    int T;
    scanf("%d",&T);
    int a,b;
    while (T--){
        while (scanf("%d%d",&a,&b)!=EOF){
            printf("%d\n",a+b);
            printf("\n");
        }
    }
    return 0;
}
