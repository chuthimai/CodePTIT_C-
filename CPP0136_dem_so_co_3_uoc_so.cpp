//
//  CPP0136_dem_so_co_3_uoc_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 29/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

bool sang[1000001];

void oneTime(){
    long long int n;
    cin>>n;
    int count = 0;
    for(int i=2; i<= sqrt(n); i++){
        if(sang[i]==true) count++;
    }
    printf("%d\n", count);
}

int main(){
    for(int i=2; i<1000001; i++) sang[i]=true;
    for(int i=2; i<1000001; i++){
        if(sang[i]==true){
            for(int j=i*2; j<1000001; j+=i) sang[j]=false;
        }
    }
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
