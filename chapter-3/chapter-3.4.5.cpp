//
// Created by mario on 2023/7/21.
//
// chapter-3.4.5
/**
 * 直接比较年、月、日输出
 */
#include <iostream>
using namespace std;
int year1,year2;
int month1,month2;
int day1,day2;
int main(){
    scanf("%d-%d-%d",&year1,&month1,&day1);
    scanf("%d-%d-%d",&year2,&month2,&day2);
    if (year1 < year2){
        cout<<"YES";
        return 0;
    }
    if (year1 == year2 && month1 < month2){
        cout<<"YES";
        return 0;
    }
    if (year1 == year2 && month1 == month2 && day1 < day2){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
