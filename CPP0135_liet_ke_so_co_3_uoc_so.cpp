//
//  CPP0135_liet_ke_so_co_3_uoc_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 19/08/2022.
//

#include <bits/stdc++.h>
#define ui unsigned int
using namespace std;

int sang[10001];
void oneTime(){
    ui a,b;
    cin>>a;
    b=sqrt(a)+1;
    for(ui i=2;i<b;i++){
        if(sang[i]==1) printf("%u ",i*i);
    }
    
    printf("\n");
}

int main(){
    
    sang[0]=0;sang[1]=0;
    for(ui i=2;i<10001;i++) sang[i]=1;
    for(ui i=2;i<10001;i++){
        if(sang[i]==1)
            for(ui j=i*2;j<10001;j=j+i) sang[j]=0;
    }
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}

