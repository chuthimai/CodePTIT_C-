//
//  CPP0105_so_loc_phat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string num;
    vector<string> numAll={"068","06","08","68","0","6","8"};
    cin>>num;
    sort(num.begin(),num.end());
    num.erase(unique(num.begin(), num.end()),num.end());
    
    for(int i=0;i<7;i++){
        if(num==numAll[i]){
            printf("YES\n");
            break;
        }
        if(num!=numAll[i] && i==6) printf("NO\n");
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        oneTime();
    }
}
