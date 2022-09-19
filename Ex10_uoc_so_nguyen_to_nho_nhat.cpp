//
//  Ex10_uoc_so_nguyen_to_nho_nhat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

int sang[1000001];

void oneTime(){
    sang[0]=0;
        for(int i=1;i<1000001;i++) sang[i]=1;
        for(int i=2;i<1000001;i++){
            if(sang[i]==1)
                for(int j=i*2; j<1000001; j=j+i){
                    if(sang[j]==1) sang[j]=i;
                }
        }
    int n; cin>>n;
    for(int i=1;i<=n;i++) {
        if(sang[i]==1) printf("%d ",i);
        else printf("%d ",sang[i]);
    }
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
