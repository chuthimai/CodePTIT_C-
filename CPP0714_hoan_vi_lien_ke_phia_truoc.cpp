//
//  CPP0714_hoan_vi_lien_ke_phia_truoc.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    vector<int> v1,v2;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    int m=0;
    v2=v1;
    do{
        if(m==1){
            for(int i=0;i<v1.size();i++) printf("%d ",v1[i]);
            break;
        }
        if(v1==v2) m++;
    }while(prev_permutation(v1.begin(), v1.end()));
    
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
