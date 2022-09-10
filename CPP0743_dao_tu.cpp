//
//  CPP0743_dao_tu.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    vector<string> words;
    
    getline(cin,str);
    
    string word="";
    str+=' ';
    for(int i=0;i<str.length();i++){
        if(str[i]==' ') {
            words.push_back(word);
            word="";
        }
        else{
            word+=str[i];
        }
    }
    
    for(int i=words.size()-1; i>=0; i--){
        cout<<words[i]<<' ';
    }
    printf("\n");
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++) oneTime();
}
