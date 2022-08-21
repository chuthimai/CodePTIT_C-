//
//  CPP0121_uoc_so_chung_boi_so_chung.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 19/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    long long int a,b;
    cin>>a>>b;
    long long int gcd=__gcd(a,b);
    long long int lcm=a*b/gcd;
    printf("%lli %lli\n",lcm,gcd);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
