//
//  CPP0273_diem_can_bang.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 29/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n; cin>>n;
    vector<int> arr,sum;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
        if(i==0) sum.push_back(a);
        else sum.push_back(sum[i-1]+a);
    }
    
    int pos = -1;
    for(int i=1; i<n; i++){
        if(sum[i-1] == sum[sum.size()-1] - sum[i]){
            pos = i+1;
            break;
        }
    }
    
    printf("%d\n",pos);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
