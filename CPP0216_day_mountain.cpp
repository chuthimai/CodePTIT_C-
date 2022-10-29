//
//  CPP0216_day_mountain.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 29/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,l,r;
    cin>>n;
    vector<int> arr, bit, m;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cin>>l>>r;
    
    bit.push_back(1);
    for(int i=l+1; i<=r; i++){
        if(arr[i]>arr[i-1]) bit.push_back(1);
        else if(arr[i]<arr[i-1]) bit.push_back(0);
        else{
            if(bit[bit.size()-1]==0) bit.push_back(0);
            else bit.push_back(1);
        }
    }
    
    m = bit;
    sort(m.rbegin(), m.rend());
    if(m==bit) printf("Yes\n");
    else printf("No\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
