//
//  CPP0115_phan_tich_thua_so_nguyen_to_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int sang[10001];
    sang[0]=0;sang[1]=0;
    for(int i=2;i<10001;i++) sang[i]=1;
    for(int i=2;i<10001;i++){
        if(sang[i]==1)
            for(int j=i*2;j<10001;j=j+i) sang[j]=0;
    }
    
    int n,m=2;
    cin>>n;
    while(n!=1){
        if(sang[m]>=1){
            if(n%m==0){
                sang[m]++;
                n=n/m;
            }else m++;
        }else m++;
    }
    for(int i=0;i<m+1;i++){
        if(sang[i]>1) printf("%d %d ",i,sang[i]-1);
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
