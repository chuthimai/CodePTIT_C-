//
//  CPP0450_phan_tu_dau_tien_lap_lai.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    int res=-1;
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(arr[i] == arr[j]){
                res = arr[i];
                break;
            }
        }
        
        if(res==arr[i]) break; //to break the fist loop
    }
    
    printf("%d\n", res);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
