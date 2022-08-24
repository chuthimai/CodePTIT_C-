//
//  CPP0203_so_nho_nhat_chua_xuat_hien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 24/08/2022.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void oneTime(){
    vector<ll> arr;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    
    unsigned int m=1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<m) continue;
        else if(arr[i]>m) {
            printf("%u\n",m);
            break;
        }
        else if(arr[i]==m){
            m++;
            if(i==arr.size()-1) printf("%u\n",m);
        }
    }
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}


