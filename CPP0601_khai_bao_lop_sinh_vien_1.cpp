//
//  CPP0601_khai_bao_lop_sinh_vien_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 11/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

class SinhVien{
private:
    string MSV = "B20DCCN001";
    string name;
    string lop;
    string date;
    vector<string> birth;
    float GPA;
    
public:
    void nhap(){
        getline(cin, name);
        cin>>lop >>date >>GPA;
        
        date += "/";
        string str = "";
        for(int i=0; i<date.length(); i++){
            if(date[i] != '/') str += date[i];
            else{
                if(str.length()==1) str = "0" + str;
                birth.push_back(str);
                str = "";
            }
        }
    }
    
    void xuat(){
        cout<<MSV<< ' '<< name<< ' '<< lop<< ' '<< birth[0]<<'/'<< birth[1]<< '/'<< birth[2]<<' ';
        printf("%.2f\n",GPA);
        
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
