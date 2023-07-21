//
// Created by mario on 2023/7/21.
//
// chapter-3.4.6
/**
 * 如果当前日期比输入日期小，那么加日期
 * 如果当前日期比输入日期大，那么减日期
 */
#include <cstdio>

int dayOfMonth[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

bool isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

void addOneDay(int &year, int &month, int &day) {
    day++;
    if (day > dayOfMonth[isLeapYear(year)][month]) {
        month++;
        day = 1;
    }
    if (month > 12) {
        year++;
        month = 1;
    }
}

void subOneDay(int &year, int &month, int &day) {
    day--;
    if (day < 1) {
        month--;
    }
    if (month < 1) {
        year--;
        month = 12;
    }
    if (day < 1) {
        day = dayOfMonth[isLeapYear(year)][month];
    }
}

bool isBefore(int year1, int month1, int day1, int year2, int month2, int day2) {
    if (year1 != year2) {
        return year1 < year2;
    }
    if (month1 != month2) {
        return month1 < month2;
    }
    return day1 < day2;
}

bool isAfter(int year1, int month1, int day1, int year2, int month2, int day2) {
    if (year1 != year2) {
        return year1 > year2;
    }
    if (month1 != month2) {
        return month1 > month2;
    }
    return day1 > day2;
}

int main() {
    int year1 = 2021, month1 = 5, day1 = 1, dayOfWeek = 6;
    int year2, month2, day2;
    scanf("%d-%d-%d", &year2, &month2, &day2);
    if (isBefore(year1, month1, day1, year2, month2, day2)) {
        while (isBefore(year1, month1, day1, year2, month2, day2)) {
            addOneDay(year1, month1, day1);
            dayOfWeek = (dayOfWeek + 1) % 7;
        }
    } else if (isAfter(year1, month1, day1, year2, month2, day2)) {
        while (isAfter(year1, month1, day1, year2, month2, day2)) {
            subOneDay(year1, month1, day1);
            dayOfWeek = (dayOfWeek - 1 + 7) % 7;
        }
    }
    printf("%d", dayOfWeek);
    return 0;
}
