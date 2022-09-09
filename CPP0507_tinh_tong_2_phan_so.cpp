//
//  CPP0507_tinh_tong_2_phan_so.cpp
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

PhanSo tong(PhanSo p, PhanSo q){
    PhanSo sum;
    sum.mau = p.mau * q.mau;
    sum.tu = p.mau*q.tu + q.mau*p.tu;
    rutgon(sum);
    return sum;
}

int main() {
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}
