//
//  CPP0517_danh_sach_nhan_vien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string MNV ;
    string name;
    string sex;
    string birth;
    string address;
    char taxNumber[11];
    string date;
};

string numToChar(int n){
    string str="";
    
    while (n!=0){
        str += n%10+'0';
        n /= 10;
    }
    reverse(str.begin(), str.end());
    while(str.length() != 5){
        str = "0" + str;
    }
    
    return str;
}

void nhap(NhanVien &a){
    cin.ignore();
    getline(cin, a.name);
    cin>>a.sex >>a.birth ;
    cin.ignore();
    getline(cin, a.address);
    cin>>a.taxNumber >>a.date;
    
}

void in(NhanVien a){
    cout<<a.MNV <<' ' <<a.name <<' ' <<a.sex <<' ' <<a.birth <<' ' <<a.address <<' ' <<a.taxNumber <<' ' <<a.date <<endl;
}

void inds(NhanVien ds[50], int n){
    for(int i=0; i<n; i++){
        ds[i].MNV = numToChar(i+1);
        in(ds[i]);
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
