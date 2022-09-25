//
//  CPP0606_khai_bao_lop_nhan_vien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 25/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

string process_date(string day){
    vector<string> days;
    day += "/";
    string str = "";
    for(int i=0; i<day.length(); i++){
        if(day[i] != '/') str += day[i];
        else{
            if(str.length()==1) str = "0" + str;
            days.push_back(str);
            str = "";
        }
    }
    
    day="";
    for(int i=0;i<days.size();i++){
        day+=days[i];
        if(i==days.size()-1) break;
        day+='/';
    }
    return day;
}

class NhanVien{
private:
    string MNV = "00001";
    string name;
    string sex;
    string birth;
    string address;
    char taxNumber[11];
    string date;
public:
    void nhap(){
        getline(cin, name);
        cin>>sex >>birth ;
        cin.ignore();
        getline(cin, address);
        cin>>taxNumber >>date;
        
    }
    
    void xuat(){
        cout<<MNV <<' ' <<name <<' ' <<sex <<' ' <<process_date(birth) <<' ' <<address <<' ' <<taxNumber <<' ' <<process_date(date) <<endl;
    }
};


int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
