//
//  CPP0622_liet_ke_sinh_vien_theo_lop.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string MSV;
    string name;
    string lop;
    string email;
};

void in(SinhVien &sinhvien){
    cin>>sinhvien.MSV;
    cin.ignore();
    getline(cin,sinhvien.name);
    cin>>sinhvien.lop>>sinhvien.email;
}

void out(SinhVien sinhvien){
    cout<<sinhvien.MSV <<" "<<sinhvien.name <<" "<<sinhvien.lop <<" "<<sinhvien.email <<endl;
}
int main(){
    int n;
    cin>>n;
    vector<SinhVien> arr;
    for(int i=0; i<n; i++){
        SinhVien a; in(a);
        arr.push_back(a);
    }
    
    int m;
    cin>>m;
    vector<string> lop;
    for(int i=0; i<m; i++){
        string a; cin>>a;
        lop.push_back(a);
    }
    
    for(int i=0; i<m; i++){
        cout<<"DANH SACH SINH VIEN LOP "<<lop[i]<<":\n";
        for(int j=0; j<n; j++){
            if(arr[j].lop == lop[i]) out(arr[j]);
        }
    }
}
