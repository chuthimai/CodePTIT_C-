//
//  CPP0505_cau_truc_nhan_vien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string MNV = "00001";
    string name;
    string sex;
    string birth;
    string address;
    char taxNumber[11];
    string date;
};

void nhap(NhanVien &a){
    getline(cin, a.name);
    cin>>a.sex >>a.birth ;
    cin.ignore();
    getline(cin, a.address);
    cin>>a.taxNumber >>a.date;
    
}

void in(NhanVien a){
    cout<<a.MNV <<' ' <<a.name <<' ' <<a.sex <<' ' <<a.birth <<' ' <<a.address <<' ' <<a.taxNumber <<' ' <<a.date <<endl;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

