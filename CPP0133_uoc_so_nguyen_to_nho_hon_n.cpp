//
//  CPP0133_uoc_so_nguyen_to_nho_hon_n.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>

using namespace std;

int sang[10001];

void oneTime(){
    unsigned int n;
    cin>>n;
    for(unsigned int i=2;i<=n;i++) if(sang[i]==1) printf("%u ",i);
    printf("\n");
}

int main(){
    
    sang[0]=0;sang[1]=0;
    for(unsigned int i=2;i<10001;i++) sang[i]=1;
    for(unsigned int i=2;i<10001;i++){
        if(sang[i]==1)
            for(unsigned int j=i*2;j<10001;j=j+i) sang[j]=0;
    }
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
