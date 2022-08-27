//
//  CPP0274_dem_so_phan_tu_lap_lai.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 27/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(), arr.end());
    
    int count=0, isFistNum=1;
    
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count+=isFistNum;
            count++;
            isFistNum=0;
        }else isFistNum=1;
    }
    
    printf("%d\n",count);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
