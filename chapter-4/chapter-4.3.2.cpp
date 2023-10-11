//
// Created by mario on 2023/10/11.
//
// chapter-4.3.2
#include "iostream"

using namespace std;

void solute(int n){
    if (n == 0) cout<<"讲你妹的故事啊！快点去睡觉！！！";
    if (n > 0) {
        cout<<"从前有座山，山上有座庙"<<endl<<"庙里有一个老和尚和一个小和尚"<<endl<<"睡前老和尚给小和尚讲故事："<<endl;
        solute(n-1);
        cout<<endl<<"然后老和尚和小和尚就睡觉啦";
    }
}

int main(){
    int n;
    cin>>n;
    solute(n);
    return 0;
}