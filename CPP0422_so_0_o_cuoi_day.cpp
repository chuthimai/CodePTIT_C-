//
//  CPP0422_so_0_o_cuoi_day.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    unsigned int n; cin>>n;
    vector<long long int> a;
    for(int i=0;i<n;i++){
        long long int c;
        cin>>c;
        a.push_back(c);
    }
    
    int m = 0;
    for(int i=0;i<n;i++){
        if(a[i]==0) m++;
        else printf("%lli ",a[i]);
    }
    for(int i=0;i<m;i++) printf("0 ");
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
