//
//  CPP0107_cham_diem_trac_nghiem.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string code101,code102;
    code101="ABBADCCABDCCABD";
    code102="ACCABCDDBBCDDBB";
    
    int code;
    cin>>code;
    vector<char> yourAnswer;
    for(int i=0;i<15;i++){
        char a;
        cin>>a;
        yourAnswer.push_back(a);
    }
    
    int count=0;
    
    for(int i=0;i<15;i++){
        if(code==101){
            if(yourAnswer[i]==code101[i]) count++;
        }else{
            if(yourAnswer[i]==code102[i]) count++;
        }
        
    }
    
    float score=count*double(10)/15;
    printf("%.2f\n",score);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
