//
//  CPP0327_chia_het_cho_5.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 20/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int charToNum(char a){
    int b='0'-0;
    int c=a-b;
    return c;
}

void oneTime(){
    int num4[1001];
    string str[1001];
    string num;
    cin>>num;
    unsigned int sum=0;
    
    reverse(num.begin(), num.end());
    if(num.length()%2==1) num+="0";
    
    for(int i=0;i<num.length();i++){
        str[i/2]+=num[i];
    }
    for(int i=0;i<num.length()/2;i++){
        if(str[i]=="00") num4[i]=0;
        else if (str[i]=="01") num4[i]=2;
        else if (str[i]=="10") num4[i]=1;
        else num4[i]=3;
    }
    
    int c=0;
    
    for(unsigned long i=num.length()/2-1;i>=0;i--){
        if(c%2==0) sum+=num4[i];
        else sum-=num4[i];
        c++;
    }
    
    if(sum%5==0) printf("Yes\n");
    else printf("No\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
    printf("\n");
    printf("\n");
}
 
