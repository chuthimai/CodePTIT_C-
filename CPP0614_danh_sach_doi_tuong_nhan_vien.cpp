//
//  CPP0614_danh_sach_doi_tuong_nhan_vien.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 02/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

int number = 1;

string numToString(int a){
    string num="";
    int x='0'-0;
    while(a!=0){
        char n = a%10+x;
        num += n;
        a /= 10;
    }
    reverse(num.begin(), num.end());
    while(num.length()<5) num = "0"+num;
    return num;
}

class NhanVien{
private:
    string MNV ;
    string name;
    string sex;
    string date_birth;
    string address;
    string tax;
    string date;
public:
    
    void process_date(string &date){
        vector<string> date_standal;
        date += "/";
        string str = "";
        for(int i=0; i<date.length(); i++){
            if(date[i] != '/') str += date[i];
            else{
                if(str.length()==1) str = "0" + str;
                date_standal.push_back(str);
                str = "";
            }
        }
        date = "";
        date = date_standal[0] + "/" + date_standal[1] + "/" + date_standal[2];
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

    
    friend istream& operator >> (istream& in, NhanVien &nhanvien){
        nhanvien.MNV = numToString(number++);
        in.ignore();
        getline(in, nhanvien.name);
        in >>nhanvien.sex >>nhanvien.date_birth;
        in.ignore();
        getline(in, nhanvien.address);
        in>>nhanvien.tax;
        in>>nhanvien.date;
        return in;
        
    }
    
    
    friend ostream& operator << (ostream& out, NhanVien &nhanvien){
        nhanvien.process_date(nhanvien.date_birth);
        nhanvien.process_date(nhanvien.date);
        nhanvien.process_name();
        out<<nhanvien.MNV<< ' '<< nhanvien.name<< ' '<<nhanvien.sex<<' '<< nhanvien.date_birth<< ' '<<nhanvien.address<<' '<<nhanvien.tax <<' '<<nhanvien.date<<endl;
        
        return out;
        
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
