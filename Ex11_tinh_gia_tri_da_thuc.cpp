//
//  Ex11_tinh_gia_tri_da_thuc.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
#define m 1000000007
using namespace std;

long long int pow(int x, int i){
    long long int a=1;
    if(i==0) return 1;
    else{
        for(int j=0; j<i; j++) a=(a*x)%m;
        return a;
    }
}

void oneTime(){
    int n,x;
    cin>>n>>x;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    reverse(arr.begin(), arr.end());
    
    long long int P=0;
    for(int i=0;i<n;i++){
        P += (arr[i]*pow(x, i)) % m;
    }
    P = P % m;
    printf("%lli\n",P);
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
