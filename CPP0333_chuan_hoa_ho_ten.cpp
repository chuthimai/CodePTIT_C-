//
//  CPP0333_chuan_hoa_ho_te.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 02/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    vector<string> name;
    getline(cin,str);
    
    string word="";
    str+=' ';
    for(int i=0;i<str.length();i++){
        if(str[i]==' ') {
            if(word!="") name.push_back(word);
            word="";
        }
        else{
            word+=str[i];
        }
    }
    
    int a='A'-'a';
    for(int i=0;i<name.size();i++){
        for(int j=0;j<name[i].length();j++){
            if((j==0 || i==name.size()-1)&& name[i][j]>='a' && name[i][j]<='z') name[i][j]+=a;
            else if(j!=0 && i!=name.size()-1 && name[i][j]>='A' && name[i][j]<='Z') name[i][j]-=a;
        }
    }
    
    for(int i=0;i<name.size();i++){
        if(i==name.size()-2) cout<<name[i]<<", ";
        else cout<<name[i]<<" ";
    }
}
