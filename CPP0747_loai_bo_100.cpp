//
//  CPP0747_loai_bo_100.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 25/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string s;
    cin>>s;
    int count=0;
    while (s.find("100")!=string::npos) {
        auto it =s.find("100");
        s.erase(s.begin()+it,s.begin()+it+3);
        count++;
    }
    if(count!=0){
        cout<<count*3<<endl;
    }
    
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
