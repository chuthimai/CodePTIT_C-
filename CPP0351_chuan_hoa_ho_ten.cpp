//
//  CPP0351_chuan_hoa_ho_ten.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 02/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void process_name(){
    string name;
    int n; cin>>n;
    cin.ignore();
    getline(cin, name);
    
    string word="";
    vector<string> names;
    name+=' ';
    for(int i=0;i<name.length();i++){
            if(name[i]==' ') {
                if(word!="") names.push_back(word);
                word="";
            }
            else{
                word+=name[i];
            }
    }
    int a='A'-'a';
        for(int i=0;i<names.size();i++){
            for(int j=0;j<names[i].length();j++){
                if(j==0 && names[i][j]>='a' && names[i][j]<='z') names[i][j]+=a;
                else if(j!=0 && names[i][j]>='A' && names[i][j]<='Z') names[i][j]-=a;
            }
        }

    if(n==1){
        cout<<names[names.size()-1]<<' ';
        for(int i=0;i<names.size()-1;i++){
            cout<<names[i]<<' ';
        }
    }else{
        for(int i=1;i<names.size();i++){
            cout<<names[i]<<' ';
        }
        cout<<names[0]<<' ';
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) process_name();
}
