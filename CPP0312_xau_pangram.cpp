//
//  CPP0312_xau_pangram.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 27/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string pangram,str;
    pangram="abcdefghijklmnopqrstuvwxyz";
    cin>>str;
    int k; cin>>k;
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    
    int min=pangram.length()-str.length();
    if(min>k) printf("0\n");
    else printf("1\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
