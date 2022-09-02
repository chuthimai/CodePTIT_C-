//
//  CPP0413_sap_xep_xen_ke.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            printf("%d ",arr[r]);
            r--;
        }else {
            printf("%d ",arr[l]);
            l++;
        }
    }
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
