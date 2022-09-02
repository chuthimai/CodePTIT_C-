//
//  CPP0332_dia_chi_emai_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string name, str="";
    getline(cin,name);
    for(int i=name.length()-1;i>=0;i--){
        if(name[i]!=' ') str=str+name[i];
        else break;
    }
    
    reverse(str.begin(), str.end());
    for(int i=0;i<name.length();i++){
        if(i==0 || name[i-1]==' ') str+=name[i];
    }
    int a='A'-'a';
    
    for(int i=0;i<str.length()-1;i++){
        if(str[i]>='A' && str[i]<='Z') str[i]=str[i]-a;
        printf("%c",str[i]);
    }
    printf("@ptit.edu.vn\n");
}
