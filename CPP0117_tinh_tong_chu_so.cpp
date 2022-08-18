//
//  CPP0117_tinh_tong_chu_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(long long int a){
    int sum=0;
    while(a!=0){
        sum+=a%10;
        a/=10;
    }
    return sum;
}

void oneTime(){
    long long int n;
    cin>>n;
    while (n>=10) {
        n=sumOfDigit(n);
    }
    printf("%lli\n",n);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
