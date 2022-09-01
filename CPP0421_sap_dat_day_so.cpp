//
//  CPP0421_sap_dat_day_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n; cin>>n;
    vector<long long int> a,b;
    for(int i=0;i<n;i++){
        long long int m;
        cin>>m;
        a.push_back(m);
        b.push_back(-1);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]==i){
                b[i]=i;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++) printf("%lli ",b[i]);
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
