//
//  CPP0201_chenh_lech_nho_nhat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>
#define ui int
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    vector<ui> arr,arr1;
    for(int i=0;i<n;i++){
        ui a;
        cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(), arr.end());
    for(int i=1;i<arr.size();i++){
        ui a;
        a=arr[i]-arr[i-1];
        arr1.push_back(a);
    }
    
    ui m=999;
    for(int i=0;i<arr1.size();i++) if(m>arr1[i]) m=arr1[i];
    printf("%u\n",m);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
