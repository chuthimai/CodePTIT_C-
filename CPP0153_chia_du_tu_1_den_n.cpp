//
//  CPP0153_chia_du_tu_1_den_n.cpp
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
    
    if(k>n) printf("%u\n",arr[n]);
    else{
        int mod=n%k;
        int div=n/k;
        res =div*arr[k-1]+arr[mod];
        printf("%u\n",res);
    }
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
