//
// Created by mario on 2023/7/18.
//
//chapter-2.2.11
#include <cstdio>
int main() {
    int year,month,day,hour,minutes,seconds;
    scanf("%d-%d-%d %d:%d:%d",&year,&month,&day,&hour,&minutes,&seconds);
    printf("%04d\n",year);
    printf("%02d\n",month);
    printf("%02d\n",day);
    printf("%02d\n",hour);
    printf("%02d\n",minutes);
    printf("%02d",seconds);
    return 0;
}
