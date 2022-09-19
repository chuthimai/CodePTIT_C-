//
//  Ex7_cau_truc_thi_sinh.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
    string name;
    string date;
    vector<string> birth;
    float diem1, diem2, diem3, sum;
};

void nhap(ThiSinh &a){
    getline(cin, a.name);
    cin>>a.date>>a.diem1>>a.diem2>>a.diem3;
    a.sum = a.diem1 + a.diem2 + a.diem3;
    
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

void in(ThiSinh a){
     cout<< a.name<< ' '<< a.birth[0]<<'/'<< a.birth[1]<< '/'<< a.birth[2]<<' ';
    printf("%.1f\n",a.sum);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
