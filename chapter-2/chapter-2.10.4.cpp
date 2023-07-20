//
// Created by mario on 2023/7/20.
//
// chapter-2.10.4
#include <iostream>
using namespace std;
int main() {
    int T;
    int a,b;
    scanf("%d",&T);
    while (T--){
        while (scanf("%d%d",&a,&b)!=EOF && (a||b)){
            printf("%d\n",a+b);
        }
    }
    return 0;
}
