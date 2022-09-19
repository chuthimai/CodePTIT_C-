//
//  Ex9_tinh_tong.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include<bits/stdc++.h>
using namespace std;
long long sum=0,MAX=2147483647;
void Do(string a){
    
    if(a.size()>10) return;
    
    int pos=0;
    if(a[0]=='-') pos=1;
    
    for(int i=pos;i<a.size();i++) if(a[i]>'9'||a[i]<'0') return;
    
    long long ss=0;
    for(int i=pos;i<a.size();i++){
        ss=ss*10+a[i]-'0';
    }
    
    if(pos==1) ss*=0-1;
    if(ss<=MAX&&ss>=(0-1)*MAX) sum+=ss;
}
int main(){
    freopen("DATA.in","r",stdin);
    string a;
    while(cin>>a){
        Do(a);
    }
    cout<<sum;
}
