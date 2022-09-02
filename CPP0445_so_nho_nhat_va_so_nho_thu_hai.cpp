//
//  CPP0445_so_nho_nhat_va_so_nho_thu_hai.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 02/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    
    if(arr.size()==1) printf("-1\n");
    else{
        printf("%d  %d\n",arr[0],arr[1]);
    }
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
