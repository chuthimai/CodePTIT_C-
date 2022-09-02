//
//  CPP0415_tinh_tich.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/09/2022.
//

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000000

void oneTime(){
    int n,m;
    cin>>n>>m;
    long long int max=-MAX,min=MAX;
    
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a>max) max=a;
    }
    
    for(int i=0;i<m;i++){
        int a; cin>>a;
        if(a<min) min=a;
    }
    
    long long int mult=max*min;
    printf("%lli\n",mult);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
