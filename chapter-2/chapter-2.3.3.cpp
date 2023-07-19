//
// Created by mario on 2023/7/19.
//
//chapter-2.3.3
#include <cstdio>
int main() {
    int n;
    scanf("%d",&n);
    switch (n) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        default:
            printf("Greater than 5");
            break;
    }
    return 0;
}
