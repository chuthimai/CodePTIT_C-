//
//  CPP0308_ky_tu_khong_lap.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 27/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    map<char, int> character;
    cin>>str;
    
    
    for(int i=0;i<str.length();i++){
        character[str[i]]++;
    }
    
    for(int i=0;i<str.length();i++){
        if(character[str[i]]==1) printf("%c",str[i]);
    }
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
