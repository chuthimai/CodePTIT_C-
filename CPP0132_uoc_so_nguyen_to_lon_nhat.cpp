//
//  CPP0132_uoc_so_nguyen_to_lon_nhat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void oneTime(){
    
    int sang[1000001];
    sang[0]=0;sang[1]=0;
    for(ll i=2;i<1000001;i++) sang[i]=1;
    for(ll i=2;i<1000001;i++){
        if(sang[i]==1)
            for(ll j=i*2;j<1000001;j=j+i) sang[j]=0;
    }
    
    vector<ll> prime;
    ll n,m=2;
    cin>>n;
    ll n1=n;
    if(n<2) printf("%lli",n);
    else{
        while(n!=1 && m<sqrt(n1)+1){
            if(sang[m]>=1){
                if(n%m==0){
                    prime.push_back(m);
                    n=n/m;
                }else m++;
            }else m++;
        }
        if(n>1) prime.push_back(n);
        printf("%lli\n",prime[prime.size()-1]);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
