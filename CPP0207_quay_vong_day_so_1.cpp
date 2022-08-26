//
//  CPP0207_quay_vong_day_so_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 26/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,d;
    cin>>n>>d;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    for(int i=0;i<arr.size();i++){
        if(d>=arr.size()){
            printf("%d ",arr[d-arr.size()]);
            d++;
        }else{
            printf("%d ",arr[d]);
            d++;
        }
    }
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
