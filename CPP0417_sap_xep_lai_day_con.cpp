//
//  CPP0417_sap_xep_lai_day_con.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    vector<int> arr, arr0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    arr0 = arr;
    sort(arr.begin(), arr.end());
    
    int L, R;
    for(int i=0; i<n; i++){
        if(arr0[i] != arr[i]){
            L = i;
            break;
        }
    }
    
    for(int i=n-1; i>=0; i--){
        if(arr0[i] != arr[i]){
            R = i;
            break;
        }
    }
    
    printf("%d %d\n",L+1,R+1);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
