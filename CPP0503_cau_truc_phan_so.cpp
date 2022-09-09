//
//  CPP0503_cau_truc_phan_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/09/2022.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct PhanSo{
    ll tu, mau;
};

void nhap(PhanSo &p){
    cin>>p.tu >>p.mau;
}

void in(PhanSo p){
    printf("%lli/%lli\n", p.tu, p.mau);
}

ll UCLN(ll a, ll b){
    while (a*b != 0) {
        if(a>b) a %= b;
        else b %= a;
    }
    return a+b;
}

void rutgon(PhanSo &p){
    ll ucln=UCLN(p.tu,p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
}

int main(){
    struct PhanSo p;
        nhap(p);
        rutgon(p);
        in(p);
        return 0;
}
