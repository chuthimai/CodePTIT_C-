//
//  Ex6_ghep_day_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int k,n; cin>>k>>n;
    vector<int> arr;
    for(int i=0; i<k*n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(),arr.end());
    for(int i=0; i<n*k; i++) printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
