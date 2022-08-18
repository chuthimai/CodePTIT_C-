//
//  CPP0110_ma_so_quoc_gia.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string num;
    cin>>num;
    int x=num.find("084");
    for(int i=0;i<num.length();i++){
        if(i>=x && i<x+3) continue;
        cout<<num[i];
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
