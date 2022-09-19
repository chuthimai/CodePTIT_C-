//
//  Ex14_chia_het_cho_11.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

int charToNum(char a){
    int b='0'-0;
    int c=a-b;
    return c;
}

void oneTime(){
    string num;
    cin>>num;
    int sum=0;
    
    for(int i=0; i<num.length(); i++){
        if(i%2==0) sum+=charToNum(num[i]);
        else sum-=charToNum(num[i]);
    }
    
    if(sum%11==0) printf("1\n");
    else printf("0\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0 ;i<n; i++) oneTime();
}
