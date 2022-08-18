//
//  CPP0430_bo_sung_phan_tu.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/08/2022.
//

#include <bits/stdc++.h>
#define ui unsigned int
using namespace std;

void oneTime(){
    vector<ui> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ui a;
        cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(), arr.end()),arr.end());
    
    ui m=arr[arr.size()-1]-arr[0]+1;
    ui r=m-arr.size();
    printf("%u\n",r);
    
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
