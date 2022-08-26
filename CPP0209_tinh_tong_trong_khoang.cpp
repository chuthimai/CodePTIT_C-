//
//  CPP0209_tinh_tong_trong_khoang.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 26/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,q;
    cin>>n>>q;
    vector<int> L,R,arr,sum;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<q;i++) sum.push_back(0);
    for(int i=0;i<q;i++){
        int a,b; cin>>a>>b;
        L.push_back(a);R.push_back(b);
    }
    
    for(int i=0;i<q;i++){
        for(int j=L[i]-1;j<R[i];j++) sum[i]+=arr[j];
    }
    
    for(int i=0;i<q;i++) printf("%d\n",sum[i]);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
