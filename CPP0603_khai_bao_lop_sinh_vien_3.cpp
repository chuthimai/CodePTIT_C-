//
//  CPP0603_khai_bao_lop_sinh_vien_3.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 25/09/2022.
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
    void process_date(){
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
    void process_name(){
        string word="";
        vector<string> names;
        name+=' ';
        for(int i=0;i<name.length();i++){
                if(name[i]==' ') {
                    if(word!="") names.push_back(word);
                    word="";
                }
                else{
                    word+=name[i];
                }
        }
        
        int a='A'-'a';
            for(int i=0;i<names.size();i++){
                for(int j=0;j<names[i].length();j++){
                    if(j==0 && names[i][j]>='a' && names[i][j]<='z') names[i][j]+=a;
                    else if(j!=0 && names[i][j]>='A' && names[i][j]<='Z') names[i][j]-=a;
                }
            }
        
        name="";
        for(int i=0;i<names.size();i++){
            name+=names[i];
            name+=' ';
        }
    }
    
    friend istream& operator >> (istream& in, SinhVien &sinhvien){
        getline(in, sinhvien.name);
        return in >>sinhvien.lop >>sinhvien.date >>sinhvien.GPA;
        
    }
    
    
    friend ostream& operator << (ostream& out, SinhVien &sinhvien){
        sinhvien.process_date();
        sinhvien.process_name();
        out<<fixed;// để in làm tròn
        return out<<sinhvien.MSV<< ' '<< sinhvien.name<< ' '<< sinhvien.lop<< ' '<< sinhvien.birth[0]<<'/'<< sinhvien.birth[1]<< '/'<< sinhvien.birth[2]<<' '<<setprecision(2)<<sinhvien.GPA<<' ';

        
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
