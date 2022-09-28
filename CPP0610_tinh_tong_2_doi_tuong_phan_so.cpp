//
//  CPP0610_tinh_tong_2_doi_tuong_phan_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 25/09/2022.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll UCLN(ll a, ll b){
    while (a*b != 0) {
        if(a>b) a %= b;
        else b %= a;
    }
    return a+b;
}


class PhanSo{
private:
    ll tu;
    ll mau;
    
public:
    void rutgon(){
        ll ucln=UCLN(tu,mau);
        tu /= ucln;
        mau /= ucln;
    }
    PhanSo(int a, int b){
        
    }
    
    friend PhanSo operator + (const PhanSo a,const PhanSo b){
        PhanSo res(1,1);
        res.tu = a.tu*b.mau + a.mau*b.tu;
        res.mau = a.mau*b.mau;
        return res;
        
    }
    friend ostream& operator << (ostream &out, PhanSo phanso){
        phanso.rutgon();
        return out << phanso.tu <<'/'<<phanso.mau<<endl;
    }
    
    friend istream& operator >> (istream& in, PhanSo &phanso){
        return in >> phanso.tu >> phanso.mau;
    }
    
    
};


int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
//    PhanSo res = p + q;
    cout<< p + q;
    return 0;
}

