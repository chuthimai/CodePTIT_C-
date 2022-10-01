//
//  CPP0118_so_sphenic.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

int sang[10001];

void oneTime(){
    int n,m=2;
    cin>>n;
    vector<int> numList, numList_before;
    while(n!=1){
        if(sang[m]>=1){
            if(n%m==0){
                numList.push_back(m);
                n=n/m;
            }else m++;
        }else m++;
    }
    numList_before = numList;
    sort(numList.begin(), numList.end());
    numList.erase(unique(numList.begin(), numList.end()), numList.end());
    if(numList.size()==numList_before.size() && numList.size()==3) printf("1");
    else printf("0");
    cout<<endl;
}

int main(){

    sang[0]=0;
    sang[1]=0;
    
    for(int i=2; i<10001; i++) sang[i]=1;
    for(int i=2; i<10001; i++){
        if(sang[i]==1)
            for(int j=i*2; j<10001; j=j+i) sang[j]=0;
    }
    
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
