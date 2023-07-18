//
// Created by mario on 2023/7/18.
//
//chapter-2.2.13
#include <cstdio>
#include <cmath>
int main() {
    double d;
    scanf("%lf",&d);
    double  temp = fabs(d);
    printf("%.2f", temp);
    printf(" %.0f", floor(d));
    printf(" %.0f", ceil(d));
    printf(" %.0f", round(d));
    printf(" %.2f", pow(d,5));
    return 0;
}
