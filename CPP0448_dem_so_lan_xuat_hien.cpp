//
//  CPP0448_dem_so_lan_xuat_hien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 02/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,X;
    cin>>n>>X;
    int m=0;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==X){
            m++;
        }
    }
    
    if(m==0) printf("-1\n");
    else printf("%d\n",m);
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
