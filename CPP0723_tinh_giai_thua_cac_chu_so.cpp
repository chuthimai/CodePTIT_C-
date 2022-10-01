//
//  CPP0723_tinh_giai_thua_cac_chu_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    string str,result="";
    cin>>str;
    
    string str2="2", str3="3", str4="223", str5="5", str6="53", str7="7", str8="7222", str9="3372";
    for(int i=0; i<n; i++){
        switch (str[i]) {
            case '2':
                result+=str2;
                break;
            case '3':
                result+=str3;
                break;
            case '4':
                result+=str4;
                break;
            case '5':
                result+=str5;
                break;
            case '6':
                result+=str6;
                break;
            case '7':
                result+=str7;
                break;
            case '8':
                result+=str8;
                break;
            case '9':
                result+=str9;
                break;
            default:
                break;
        }
    }
    
    sort(result.rbegin(), result.rend());
    cout<<result<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
