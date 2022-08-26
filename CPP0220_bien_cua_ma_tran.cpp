//
//  CPP0220_bien_cua_ma_tran.cpp
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
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                printf("%d ",A[i][j]);
            }else printf("  ");
        }
        printf("\n");
    }
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
