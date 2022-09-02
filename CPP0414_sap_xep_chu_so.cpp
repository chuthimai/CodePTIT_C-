//
//  CPP0414_sap_xep_chu_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n; cin>>n;
    cin.ignore();
    string str;
    getline(cin,str);
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()),str.end());
    for(int i=1;i<str.length();i++){
        cout<<str[i]<<' ';
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
