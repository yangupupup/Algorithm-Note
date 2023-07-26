//
// Created by mario on 2023/7/26.
//
// chapter-4.1.7
#include <cstdio>
#include <algorithm>
#include <cstring>
#define MAX_LEN 1000
using namespace std;
struct Student{
    char name[16];
    int score;
} stu[1000];
int n;
int cmp(Student a,Student b){
    if (a.score != b.score) return a.score > b.score;
    else return strcmp(a.name,b.name) < 0;
}
int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%s%d",stu[i].name,&stu[i].score);
    }
    sort(stu,stu+n, cmp);
    for (int i = 0; i < n; ++i) {
        printf("%s %d\n",stu[i].name,stu[i].score);
    }
    return 0;
}
