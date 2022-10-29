//
//  CPP0141_kiem_tra_so_Fibonacci.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 29/10/2022.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void oneTime(){
    ll n;
    cin>>n;
    if(n==0 || n==1) cout<<"YES"<<endl;
    else{
        ll f1=0;
        ll f2=1;
        ll fn = f1+f2;
        while(fn<n){
            f1 = f2;
            f2 = fn;
            fn = f1+f2;
        }
        
        if(fn==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
