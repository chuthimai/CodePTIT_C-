//
//  CPP0613_danh_sach_doi_tuong_sinh_vien_3.cpp
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
    while(num.length()<3) num = "0"+num;
    return num;
}

class SinhVien{
private:
    string MSV ;
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

    friend void sapxep(SinhVien ds[50], int N);
    
    friend istream& operator >> (istream& in, SinhVien &sinhvien){
        sinhvien.MSV = "B20DCCN" + numToString(number++);
        scanf("\n");
        getline(in, sinhvien.name);
        in >>sinhvien.lop >>sinhvien.date >>sinhvien.GPA;
        return in;
        
    }
    
    
    friend ostream& operator << (ostream& out, SinhVien &sinhvien){
        sinhvien.process_date();
        sinhvien.process_name();
        out<<fixed;// để in làm tròn
        out<<sinhvien.MSV<< ' '<< sinhvien.name<< ' '<< sinhvien.lop<< ' '<< sinhvien.birth[0]<<'/'<< sinhvien.birth[1]<< '/'<< sinhvien.birth[2]<<' '<<setprecision(2)<<sinhvien.GPA<<endl;
        
        return out;
        
    }
};
void sapxep(SinhVien ds[50], int N){
    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(ds[j].GPA>ds[i].GPA) swap(ds[j],ds[i]);
        }
    }
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
