//
//  CPP0623_liet_ke_sinh_vien_theo_khoa.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

int stringToNum(string a){
    int change = '0'-0;
    int num = 0;
    for(int i=0; i<a.length(); i++){
        num = num*10 + a[i]-change;
    }
    return num;
}

struct SinhVien{
    string MSV;
    string name;
    string lop;
    string email;
    string khoa;
};

void in(SinhVien &sinhvien){
    cin>>sinhvien.MSV;
    cin.ignore();
    getline(cin,sinhvien.name);
    cin>>sinhvien.lop>>sinhvien.email;
    sinhvien.khoa.push_back(sinhvien.lop[1]);
    sinhvien.khoa.push_back(sinhvien.lop[2]);
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
    vector<int> khoa;
    for(int i=0; i<m; i++){
        int a; cin>>a;
        khoa.push_back(a);
    }
    
    for(int i=0; i<m; i++){
        cout<<"DANH SACH SINH VIEN KHOA "<<khoa[i]<<":\n";
        for(int j=0; j<n; j++){
            if(stringToNum(arr[j].khoa) == khoa[i]%2000) out(arr[j]);
        }
    }
}

