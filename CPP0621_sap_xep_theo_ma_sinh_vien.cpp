//
//  CPP0621_sap_xep_theo_ma_sinh_vien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 23/10/2022.
//

#include<bits/stdc++.h>
using namespace std;
struct Svien{
    string lop,name,msv,mail;
    
};
bool dcm(Svien a, Svien b){
    return a.msv < b.msv;
    
}
void nhap(Svien &a){
    getline(cin >> ws , a.name);
    getline(cin >> ws , a.lop);
    getline(cin >> ws , a.mail);
    
}
void in(Svien s){
    cout << s.msv << " " << s.name << " " << s.lop << " " << s.mail << endl;
    
}
int main() {
    Svien a[10001];
    vector<Svien> v;
    int d = 0;
    while( getline(cin >>ws, a[d].msv )){
        nhap(a[d]); d++;
        
    }
    sort(a,a+d,dcm);
    for(int i=0; i<d;i++){
        in(a[i]);
        
    }
    return 0;
    
}
