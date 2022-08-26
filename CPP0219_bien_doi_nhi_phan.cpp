//
//  CPP0219_bien_doi_nhi_phan.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 26/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,m; cin>>n>>m;
    bool A[n][m];
    set<int> row,colume;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
            if(A[i][j]==1){
                row.insert(i);
                colume.insert(j);
            }
        }
    }
    
    for(int i:row){
        for(int j=0;j<m;j++) A[i][j]=1;
    }
    
    for(int j:colume){
        for(int i=0;i<n;i++) A[i][j]=1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) printf("%d ",A[i][j]);
        printf("\n");
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
