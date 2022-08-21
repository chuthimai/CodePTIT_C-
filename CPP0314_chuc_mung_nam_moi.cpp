//
//  CPP0314_chuc_mung_nam_moi.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 20/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> str;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string a;
        getline(cin,a);
        str.insert(a);
    }
    unsigned long res=str.size();
    cout<<res<<endl;
}
