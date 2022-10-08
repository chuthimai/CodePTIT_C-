//
//  CPP0353_dien_thoai_cuc_gach.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    cin>>str;
    map<char, char> code;
    int change = '0' - 0;
    char A = 'A', a = 'a';
    
    for(int i=2; i<=9; i++){
        code[A++] = i + change;
        code[a++] = i + change;
        code[A++] = i + change;
        code[a++] = i + change;
        code[A++] = i + change;
        code[a++] = i + change;
        if(i==7 or i==9){
            code[A++] = i + change;
            code[a++] = i + change;
        }
    }
    
    string res = "",res0;
    for(int i=0; i<str.length(); i++){
        res += code[str[i]];
    }
    res0 = res;
    reverse(res.begin(), res.end());
    if(res0==res){
        printf("YES\n");
    }else printf("NO\n");
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
