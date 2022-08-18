//
//  CPP0111_so_lien_ke.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> charToNum(string str){
    vector<int> a;
    int m='0'-0;
    for(int i=0;i<str.length();i++){
        str[i]=str[i]-m;
        a.push_back(str[i]);
    }
    return a;
}

void oneTime(){
    string num;
    cin>>num;
    vector<int> number;
    number=charToNum(num);
    
    for(int i=1;i<num.length();i++){
        if(number[i]!=number[i-1]-1 && number[i]!=number[i-1]+1){
            printf("NO\n");
            break;
        }
        
        if((number[i]==number[i-1]-1 || number[i]==number[i-1]+1) && i==num.length()-1){
            printf("YES\n");
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
