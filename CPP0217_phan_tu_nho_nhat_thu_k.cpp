//
//  CPP0217_phan_tu_nho_nhat_thu_k.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 29/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n, pos;
    cin>>n>>pos;
    vector<int> arr;
    for(int i=0; i<n*n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    printf("%d\n",arr[pos-1]);
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
