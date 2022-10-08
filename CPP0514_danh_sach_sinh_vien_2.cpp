//
//  CPP0514_danh_sach_sinh_vien_2.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

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

struct SinhVien{
    string MSV = "B20DCCN";
    string name;
    string lop;
    string date;
    float GPA;
};

void process_date(string &date){
    vector<string> birth;
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
    date = birth[0]+"/"+birth[1]+"/"+birth[2];
}

void process_name(string &name){
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

void nhap(SinhVien ds[50], int n){
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, ds[i].name);
        cin>>ds[i].lop;
        cin>>ds[i].date;
        cin>>ds[i].GPA;
    }
}

void in(SinhVien ds[50], int n){
    for(int i=0; i<n; i++){
        ds[i].MSV += numToString(i+1);
        process_date(ds[i].date);
        process_name(ds[i].name);
        cout<<ds[i].MSV <<" " <<ds[i].name<<" " <<ds[i].lop <<" " <<ds[i].date<<" ";
        printf("%.2f\n",ds[i].GPA);
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
