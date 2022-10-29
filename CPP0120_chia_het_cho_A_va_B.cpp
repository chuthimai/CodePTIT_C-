//
//  CPP0120_chia_het_cho_A_va_B.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 29/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b){
    while(a*b!=0){
        if(a>b){
            a = a%b;
        }else b = b%a;
    }
    return a+b;
}

int count(int m, int n, int a){
    int l,c=0;
    l = (m/a)*a;
    for(int i = l; i<=n; i+=a){
        if(i>=m) c++;
    }
    return c;
}

void oneTime(){
    int m, n, a, b;
    cin>>m>>n>>a>>b;
    int c = count(m, n, a) + count(m, n, b) - count(m, n, a*b/ucln(a, b));
    printf("%d\n", c);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
