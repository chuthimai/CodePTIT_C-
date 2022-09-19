//
//  Ex1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr, subArr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    int l,r;
    cin>>l>>r;
    
    subArr.push_back(1);
    for(int i=l+1;i<r;i++){
        if(arr[i]>arr[i-1]) subArr.push_back(1);
        else if(arr[i]<arr[i-1]) subArr.push_back(0);
    }
    
    
    bool mountain=true;
    for(int i=0;i<subArr.size();i++){
        if(subArr[i]>subArr[i-1]) mountain=false;
    }
    
    if(mountain==true) printf("Yes\n");
    else printf("No\n");
}
