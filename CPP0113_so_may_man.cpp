//
//  CPP0113_so_may_man.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    
//    string num;
//    cin>>num;
//
//    int a=num.rfind("86");
//    if(a==num.length()-2) printf("1\n");
//    else printf("0\n");
    
    unsigned int num;
    cin>>num;
    
    if(num%100==86) printf("1\n");
    else printf("0\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
