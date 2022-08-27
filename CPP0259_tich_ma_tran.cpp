//
//  CPP0259_tich_ma_tran.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 27/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,p;
    cin>>n>>m>>p;
    int A[n][m], B[m][p], C[n][p];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>A[i][j];
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++) cin>>B[i][j];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++) C[i][j]=0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<m;k++) C[i][j]+=A[i][k]*B[k][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++) printf("%d ",C[i][j]);
        printf("\n");
    }
}
