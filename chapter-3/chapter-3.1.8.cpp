//
// Created by mario on 2023/7/20.
//
// chapter-3.1.8
// TODO 看不懂   2023/7/20
#include <cstdio>

int main() {
    int n, result = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        result = (result * 2) % 1007;
    }
    printf("%d", result);
    return 0;
}
