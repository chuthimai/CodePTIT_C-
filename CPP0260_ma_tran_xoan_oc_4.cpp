//
//  CPP0260_ma_tran_xoan_oc_4.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 29/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

int matrix[100][100];

int main(){
    int n;
    scanf("%d",&n);
    vector<int> arr;
    for(int i=0; i<n*n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    
    int d=0;
    int x1=0,x2=n-1,y1=0,y2=n-1;
    
    while (x1!=x2 && y1!=y2) {
        for(int i=y1;i<=y2;i++) {
            matrix[x1][i]=arr[d++];
        }
        if(x1<x2) x1++;
        
        for(int i=x1;i<=x2;i++) {
            matrix[i][y2]=arr[d++];
        }
        if(y1<y2) y2--;
        
        for(int i=y2;i>=y1;i--) {
            matrix[x2][i]=arr[d++];
        }
        if(x1<x2) x2--;

        for(int i=x2;i>=x1;i--) {
            matrix[i][y1]=arr[d++];
        }
        if(y1<y2) y1++;
        if(x1==x2 && y1==y2) matrix[x1][y1]=arr[n*n-1];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d ",matrix[i][j]);
        printf("\n");
    }
}

