//
//  CPP0125_liet_ke_so_nguyen_to_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/08/2022.
//

#include <bits/stdc++.h>
#define ui unsigned int
using namespace std;

int sang[1000001];
int main(){
    
    sang[0]=0;sang[1]=0;
    for(ui i=2;i<1000001;i++) sang[i]=1;
    for(ui i=2;i<1000001;i++){
        if(sang[i]==1)
            for(ui j=i*2;j<1000001;j=j+i) sang[j]=0;
    }
    
    ui a,b;
    cin>>a>>b;
    if(a>b) swap(a, b);
    for(ui i=a;i<=b;i++){
        if(sang[i]==1) printf("%u ",i);
    }
}


