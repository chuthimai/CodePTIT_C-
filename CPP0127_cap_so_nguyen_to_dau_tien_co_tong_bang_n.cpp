//
//  CPP0127_cap_so_nguyen_to_dau_tien_co_tong_bang_n.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 19/08/2022.
//

#include <bits/stdc++.h>
#define ui unsigned int
using namespace std;

int sang[1000001];

void oneTime(){
    ui n;
    cin>>n;
    bool mark=true;
    
    for(int i=0;i<n/2+1;i++){
        if(sang[i]==1 && sang[n-i]==1){
            printf("%d %d\n",i,n-i);
            mark=false;
            break;
        }
    }
    if(mark==true) printf("-1\n");
}

int main(){

    sang[0]=0;sang[1]=0;
    for(ui i=2;i<1000001;i++) sang[i]=1;
    for(ui i=2;i<1000001;i++){
        if(sang[i]==1)
            for(ui j=i*2;j<1000001;j=j+i) sang[j]=0;
    }

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) oneTime();
}


