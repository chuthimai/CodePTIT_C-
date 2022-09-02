//
//  CPP0354_ma_hoa.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

char numToChar(int a){
    int m='0'-0;
    return a+m;
}

void oneTime(){
    string str,res="";
    cin>>str;
    vector<int> arr;
    int a=1;
    arr.push_back(a);
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]){
            a++;
            arr.push_back(a);
        }else{
            a=1;
            arr.push_back(a);
        }
    }
    
    for(int i=str.length()-1;i>=0;i--){
        if(i==str.length()-1 || arr[i]>=arr[i+1]){
            res+=numToChar(arr[i]);
            res+=str[i];
        }
    }
    
    reverse(res.begin(), res.end());
    cout<<res<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
