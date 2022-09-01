//
//  CPP0371_loai_bo_nguyen_am.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int a='A'-'a';
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z') str[i]=str[i]-a;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y') continue;
        else printf(".%c",str[i]);
    }
}
