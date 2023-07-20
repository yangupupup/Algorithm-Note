//
// Created by mario on 2023/7/20.
//
// chapter-2.9.1
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    double d;
    string s;
    cin>>n>>d;
    getchar();
    getline(cin,s);
    cout<<n<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<d<<endl;
    cout<<s;
    return 0;
}
