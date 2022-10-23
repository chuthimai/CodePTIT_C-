//
//  CPP0620_sap_xep_sinh_vien_theo_lop.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 23/10/2022.
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
    scanf("\n");
    getline(cin,sinhvien.name);
    cin>>sinhvien.lop>>sinhvien.email;
}

void out(SinhVien sinhvien){
    cout<<sinhvien.MSV <<" "<<sinhvien.name <<" "<<sinhvien.lop <<" "<<sinhvien.email <<endl;
}

bool compare(SinhVien a, SinhVien b){
    if (a.lop==b.lop){
        return a.MSV<b.MSV;
    }else return a.lop<b.lop;
}

int main(){
    int n;
    cin>>n;
    vector<SinhVien> arr;
    for(int i=0; i<n; i++){
        SinhVien a; in(a);
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(), compare);
    
    for(int i=0; i<n; i++){
        out(arr[i]);
    }
    
}
