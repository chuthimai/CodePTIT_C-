//
//  CPP0106_so_thuan_nghich.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string num,rnum="";
    cin>>num;
    for(int i=num.length()-1;i>=0;i--){
        rnum.push_back(num[i]);
    }
    if(num==rnum) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        oneTime();
    }
}
