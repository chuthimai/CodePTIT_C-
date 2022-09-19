//
//  Ex13_tinh_tong_cac_so_trong_xau.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

long long int charToNum(string a){
    long long int num=0;
    int x='0'-0;
    for(int i=0; i<a.length(); i++){
        num=num*10+(a[i]-x);
    }

    return num;
}

void oneTime(){
    string str;
    cin>>str;
    vector<string> arr;
    
    ll sum=0;
    string a;
    str+='a';
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            a=a+str[i];
        }else{
            if(a!="") arr.push_back(a);
            a="";
        }
    }
    
    for(int i=0;i<arr.size();i++){
        sum+=charToNum(arr[i]);
    }
    
    printf("%lli\n",sum);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
