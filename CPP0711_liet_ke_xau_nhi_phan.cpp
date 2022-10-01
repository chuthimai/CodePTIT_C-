//
//  CPP0711_liet_ke_xau_nhi_phan.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    vector<bool> binary;
    for(int i=0; i<n; i++) binary.push_back(0);
    
    bool loop=true;
    while (loop==true) {
        for(int i=0; i<n; i++) cout<<binary[i];
        printf(" ");
        
        for(int i=n-1;i>=0;i--){
            if(binary[i]==0){
                binary[i]=1;
                for(int j=i+1; j<n; j++) binary[j]=0;
                break;
            }else if(i==0 && binary[i]==1) {
                loop=false;
                break;
            }
        }
    }
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
