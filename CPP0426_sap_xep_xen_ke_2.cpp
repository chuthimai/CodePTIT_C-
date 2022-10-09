//
//  CPP0426_sap_xep_xen_ke_2.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n; cin>>n;
    vector<int> arr, arr_fist, arr_last;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<n; i++){
        if(i<n/2) arr_fist.push_back(arr[i]);
        else arr_last.push_back(arr[i]);
    }
    reverse(arr_last.begin(), arr_last.end());
    for(int i=0; i<n; i++){
        if(i%2==0) printf("%d ",arr_last[i/2]);
        else printf("%d ",arr_fist[i/2]);
    }
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
