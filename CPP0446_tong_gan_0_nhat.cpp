//
//  CPP0446_tong_gan_0_nhat.cpp
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
    
    int sum=0,min=10000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(abs(sum)<abs(min)) min=sum;
        }
    }
    
    printf("%d\n",min);
}


int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
