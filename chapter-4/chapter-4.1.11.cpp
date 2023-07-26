//
// Created by mario on 2023/7/26.
//
// chapter-4.1.11
/**
 * 思路：
 * 1、需要一个计数器记录出现相同值的个数
 * 2、指针往后移动，作为排名
 * 3、根据计数器打印多少次相同值
 */
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 1000;
int a[MAXN];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n, cmp);
    int sameRankCount = 1;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && a[i] == a[i + 1]) {
            sameRankCount++;
        } else {
            for (int j = 0; j < sameRankCount; j++) {
                printf("%d %d\n", a[i], i + 1);
            }
            sameRankCount = 1;
        }
    }
    return 0;
}