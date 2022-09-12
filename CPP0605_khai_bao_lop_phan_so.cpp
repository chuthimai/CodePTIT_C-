//
//  CPP0605_khai_bao_lop_phan_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 11/09/2022.
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
    friend ostream& operator << (ostream &out, PhanSo &phanso){
        phanso.rutgon();
        return out << phanso.tu <<'/'<<phanso.mau;
    }
    
    friend istream& operator >> (istream& in, PhanSo& phanso){
        return in >> phanso.tu >> phanso.mau;
    }
    
    
};


int main() {
    PhanSo p(1,1);
    cin >> p;
    cout << p <<endl;
    return 0;
}

