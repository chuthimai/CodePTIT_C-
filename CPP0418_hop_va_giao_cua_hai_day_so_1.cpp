//
//  CPP0418_hop_va_giao_cua_hai_day_so_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,m;
    cin>>n>>m;
    vector<int> A,B, Union, Intersection;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        A.push_back(a);
    }
    for(int i=0; i<m; i++){
        int b; cin>>b;
        B.push_back(b);
    }
    
    Union = A;
    for(int i=0; i<m; i++){
        Union.push_back(B[i]);
    }
    sort(Union.begin(), Union.end());
    Union.erase(unique(Union.begin(), Union.end()), Union.end());
    
    for(int i=0; i<n; i++){
        auto it = find(B.begin(), B.end(), A[i]);
        if(it != B.end()){
            Intersection.push_back(A[i]);
        }
    }
    sort(Intersection.begin(), Intersection.end());
    
    for(int i=0; i<Union.size(); i++){
        printf("%d ",Union[i]);
    }
    printf("\n");
    
    for(int i=0; i<Intersection.size(); i++){
        printf("%d ",Intersection[i]);
    }
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
