//
//  CPP0741_tinh_luy_thua.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/10/2022.
//

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void oneTime(){
    ll x,y,p,res=1;
    cin>>x>>y>>p;
    
    for(int i=0; i<y; i++){
        res = res%p * x%p;
    }
    
    printf("%lli\n",res%p);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
