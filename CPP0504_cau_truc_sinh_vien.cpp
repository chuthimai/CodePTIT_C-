//
//  CPP0504_cau_truc_sinh_vien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string MSV = "B20DCCN001";
    string name;
    string lop;
    string date;
    vector<string> birth;
    float GPA;
};

void nhap(SinhVien &a){
    getline(cin, a.name);
    cin>>a.lop >>a.date >>a.GPA;
    
    a.date += "/";
    string str = "";
    for(int i=0; i<a.date.length(); i++){
        if(a.date[i] != '/') str += a.date[i];
        else{
            if(str.length()==1) str = "0" + str;
            a.birth.push_back(str);
            str = "";
        }
    }
}

void in(SinhVien a){
     cout<<a.MSV<< ' '<< a.name<< ' '<< a.lop<< ' '<< a.birth[0]<<'/'<< a.birth[1]<< '/'<< a.birth[2]<<' ';
    printf("%.2f\n",a.GPA);
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

