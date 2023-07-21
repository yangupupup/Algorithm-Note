//
// Created by mario on 2023/7/21.
//
// chapter-3.4.4
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
int year1,month1,day1;
int year2,month2,day2;
int n = 1;
int main(){
    scanf("%d-%d-%d",&year1,&month1,&day1);
    year2 = year1;
    month2 = 1;
    day2 = 1;
    while (month2 < month1 || day2 < day1){
        n++;
        day2++;
        if (day2 == Month[month2][isLeapYear(year2)] + 1){
            day2 = 1;
            month2++;
        }
    }
    cout<<n;
    return 0;
}
