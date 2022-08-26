//
//  CPP0208_phan_tu_nho_nhat_thu_k.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 26/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    printf("%d\n",arr[k-1]);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
