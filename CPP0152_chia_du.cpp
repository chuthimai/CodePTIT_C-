//
//  CPP0152_chia_du.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    unsigned int a,m;
    cin>>a>>m;
    for(int i=0;i<m;i++){
        if(a*i%m==1){
            printf("%d\n",i);
            break;
        }
        if(i==m-1 && a*i%m!=1) printf("-1\n");
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
