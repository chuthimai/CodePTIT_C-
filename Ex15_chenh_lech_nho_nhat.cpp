//
//  Ex15_chenh_lech_nho_nhat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n; cin>>n;
    vector<int> arr, dist;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i=1; i<n; i++){
        int a=abs(arr[i]-arr[i-1]);
        dist.push_back(a);
    }
    
    int min=dist[0];
    for(int i=0; i<dist.size(); i++){
        if(min>dist[i]) min=dist[i];
    }
    
    printf("%d\n",min);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
