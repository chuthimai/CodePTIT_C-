//
//  CPP0327_chia_het_cho_5.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 20/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string num;
    cin>>num;
    int r=0;
    for (int i=0;i<num.length();i++){
        if(num[i]=='1') r=(2*r+1)%5;
        else r=(2*r)%5;
    }

    if(r==0) printf("Yes\n");
    else printf("No\n");

}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
