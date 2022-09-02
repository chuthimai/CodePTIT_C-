//
//  CPP0343_day_uu_the.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    
    getline(cin, str);
    int odd=0,even=0;
    
    for(int i=str.length()-1;i>=0;i--){
        if(i==str.length()-1 || str[i+1]==' '){
            if(str[i]%2==0) even++;
            else odd++;
        }
    }
    
    if(((even+odd)%2==0 && even>odd) || ((even+odd)%2!=0 && even<odd)) printf("YES\n");
    else printf("NO\n");
    
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++) oneTime();
}
