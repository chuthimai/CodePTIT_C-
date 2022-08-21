//
//  CPP0122_uoc_so-chung_lon_nhat_cua_n_so_nguyen_duong_dau_tien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 19/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    long long int n,res=1;
    cin>>n;
    for(long long int i=1;i<=n;i++){
        long long int gcd=__gcd(res,i);
        res=res*i/gcd;
    }
    printf("%lli\n",res);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) oneTime();
}
