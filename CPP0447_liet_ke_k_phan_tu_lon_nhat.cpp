//
//  CPP0447_liet_ke_k_phan_tu_lon_nhat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 02/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,k; cin>>n>>k;
    vector<int> arr;
    
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.rbegin(), arr.rend());
    for(int i=0;i<k;i++) printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
