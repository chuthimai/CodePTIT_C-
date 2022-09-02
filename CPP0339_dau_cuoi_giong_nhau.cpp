//
//  CPP0339_dau_cuoi_giong_nhau.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
    }
    printf("%d\n",count);
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        oneTime();
    }
}
