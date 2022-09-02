//
//  CPP0230_ma_tran_nhi_phan.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 26/08/2022.
//

#include <bits/stdc++.h>
using namespace <#identifier#>;
using namespace std;

int main(){
    vector<int> count;
    int n; cin>>n;
    bool A[n][3];
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<3;j++){
            cin>>A[i][j];
            if(A[i][j]==1) c++;
        }
        count.push_back(c);
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(count[i]>=2) res++;
    }
    printf("%d\n",res);
}




