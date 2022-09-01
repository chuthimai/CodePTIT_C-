//
//  CPP0412_sap_xep0-1-2.cpp
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
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
