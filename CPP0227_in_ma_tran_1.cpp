//
//  CPP0227_in_ma_tran_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 26/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n; cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>A[i][j];
    }
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++) printf("%d ",A[i][j]);
        }else{
            for(int j=n-1;j>=0;j--) printf("%d ",A[i][j]);
        }
    }
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
