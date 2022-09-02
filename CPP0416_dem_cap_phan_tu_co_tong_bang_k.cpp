//
//  CPP0416_dem_cap_phan_tu_co_tong_bang_k.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k) count++;
        }
    }
    
    printf("%d\n",count);
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
