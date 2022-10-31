//
//  CPP0234_ma_tran_xoan_oc_3.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/10/2022.
//

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n, pos;
        cin >> m >> n>> pos;
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                
            }
            
        }
        int dong = m, cot = n, k = 0, p = 0, i;
        int b[m*n];
        while(k < m*n){
            for(i = p; i < cot; i++) b[k++]=a[p][i];
            for(i = p+1; i < dong; i++) b[k++]=a[i][cot-1];
            for(i = cot-2; i >=p; i--) b[k++]=a[dong-1][i];
            for(i = dong-2; i > p; i--) b[k++]=a[i][p];
            p++;
            dong --;
            cot --;
            
        }
        
        cout<<b[pos-1]<<endl;
        
    }
    
}

