//
//  CPP0154_tong_chia_du_cho_k.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 20/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

unsigned int arr[1001];

void oneTime(){
    int n;
    long long int k;
    unsigned int res=0;
    cin>>n>>k;
    
    if(k>n) res=arr[n];
    else{
        int mod=n%k;
        int div=n/k;
        res =div*arr[k-1]+arr[mod];
    }
    
    if(k==res)printf("1\n");
    else printf("0\n");
}

int main(){
    
    arr[0]=0;
    for(int i=1;i<1001;i++){
        arr[i]=i+arr[i-1];
    }
    
    int T;
    cin>>T;
    for(int i=0;i<T;i++) oneTime();
}
