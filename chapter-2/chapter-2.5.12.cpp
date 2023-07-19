//
// Created by mario on 2023/7/19.
//
//chapter-2.5.12
#include <iostream>
using namespace std;
char str[100];
int main() {
    int y,m,d,h,min,s;
    scanf("%d%d%d%d%d%d",&y,&m,&d,&h,&min,&s);
    sprintf(str,"%04d-%02d-%02d %02d:%02d:%02d",y,m,d,h,min,s);
    printf("%s",str);
    return 0;
}
