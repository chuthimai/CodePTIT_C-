//
//  CPP0313_loai_bo_tu_trong_xau.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 27/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,word;
    getline(cin,str);
    cin>>word;
    
    while (str.find(word)!=-1) {
        str.erase(str.find(word), word.length()+1);
    }
    
    cout<<str<<endl;
}
