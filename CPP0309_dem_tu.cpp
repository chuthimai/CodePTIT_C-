//
//  CPP0309_dem_tu.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 27/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    cin.ignore();
    getline(cin,str);
    
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' ' && str[i]!='\t' && str[i]!='\n'){
            count++;
            for(int j=i;j<str.length();j++){
                i=j;
                if(str[j]==' ' || str[j]=='\t' || str[j]=='\n') {
                    break;
                }
            }
        }
    }
    printf("%d\n",count);
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
