//
// Created by mario on 2023/7/24.
//
// chapter-3.5.4
/**
 * 思路：
 *  字符'0'~'9'转换为对应的数字为对'0'字符的偏移量
 */
#include <cstdio>
#include <cstring>

const int MAXN = 8;
char radixK[MAXN];

int main() {
    int k;
    scanf("%s %d", radixK, &k);
    int radix10 = 0, base = 1, lenRadixK = strlen(radixK);
    for (int i = lenRadixK - 1; i >= 0; i--) {
        int thisPosition = (radixK[i] >= '0' && radixK[i] <= '9') ? (radixK[i] - '0') : (radixK[i] - 'A' + 10);
        radix10 += thisPosition * base;
        base *= k;
    }
    printf("%d", radix10);
    return 0;
}
