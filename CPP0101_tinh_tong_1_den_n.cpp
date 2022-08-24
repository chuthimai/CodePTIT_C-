//
//  CPP0101_tinh_tong_1_den_n.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//



#include <bits/stdc++.h>
using namespace std;
void oneTime(){
    long int n;
    scanf("%ld",&n);
    unsigned long sum=(1+n)*n/2;
    
    printf("%lld\n",sum);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        oneTime();
    }
}
