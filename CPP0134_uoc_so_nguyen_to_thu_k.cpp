//
//  CPP0134_uoc_so_nguyen_to_thu_k.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int sang[10001];

void oneTime(){
    vector<int> prime;
    int n,k,m=2;
    cin>>n>>k;
    
    while(n!=1){
        if(sang[m]>=1){
            if(n%m==0){
                prime.push_back(m);
                n=n/m;
            }else m++;
        }else m++;
    }
    if(n>1) prime.push_back(n);
    
    if(k>prime.size()) printf("-1\n");
    else printf("%d\n",prime[k-1]);
}

int main(){
    
    sang[0]=0;sang[1]=0;
    for(int i=2;i<10001;i++) sang[i]=1;
    for(int i=2;i<10001;i++){
        if(sang[i]==1)
            for(int j=i*2;j<10001;j=j+i) sang[j]=0;
    }
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
