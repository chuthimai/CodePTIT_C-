//
//  CPP0317_so_dep.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 20/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    
    string str1,str2;
    cin>>str1;
    str2=str1;
    reverse(str1.begin(), str1.end());
    if(str1==str2){
        for(int i=0;i<str1.length();i++){
            if(str1[i]%2==1){
                printf("NO\n");
                break;
            }else if (str1[i]%2==0)  if(i==str1.length()-1) printf("YES\n");
        }
    }else printf("NO\n");
    
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
