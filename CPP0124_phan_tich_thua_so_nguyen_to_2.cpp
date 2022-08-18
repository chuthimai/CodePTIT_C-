//
//  CPP0124_phan_tich_thua_so_nguyen_to_2.cpp
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
    
    ui n,m=2;
    cin>>n;
    ui n1=n;

    while(n!=1 && m<sqrt(n1)+1){
        if(sang[m]>=1){
            if(n%m==0){
                sang[m]++;
                n=n/m;
            }else m++;
        }else m++;
    }
    for(ui i=0;i<m+1;i++){
        if(sang[i]>1) printf("%u %u\n",i,sang[i]-1);
    }
    if(n>1) printf("%u 1\n",n);
}

