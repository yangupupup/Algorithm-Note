//
// Created by mario on 2023/7/21.
//
// chapter-3.4.3
/**
 * day确定month
 * month确定year和month
 * day由month和year共同确定
 */
#include <iostream>
using namespace std;
int Month[13][2]={
        {0,0},{31,31},{28,29},{31,31},{30,30},
        {31,31},{30,30},{31,31},{31,31},{30,30},
        {31,31},{30,30},{31,31}
};
bool isLeapYear(int year){
    return ((year % 4 == 0 && year % 100 !=0) || (year % 400 ==0));
}
int year,month,day;
int n;
int main(){
    scanf("%d-%d-%d",&year,&month,&day);
    scanf("%d",&n);
    while (n--){
        day--;
        if (day == 0){
            month--;
        }
        if (month == 0){
            year--;
            month = 12;
        }
        if (day < 1) {
            day = Month[month][isLeapYear(year)];
        }
    }
    printf("%04d-%02d-%02d",year,month,day);
    return 0;
}