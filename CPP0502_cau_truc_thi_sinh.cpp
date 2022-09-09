//
//  CPP0502_cau_truc_thi_sinh.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
    string name;
    string date;
    float diem1, diem2, diem3, sum;
    
};

void nhap(ThiSinh &A){
    getline(cin, A.name);
    cin>>A.date;
    cin>>A.diem1 >>A.diem2 >>A.diem3;
    A.sum = A.diem1 + A.diem2 + A.diem3;
}

void in(ThiSinh A){
    cout<<A.name <<" " <<A.date <<" ";
    printf("%.1f\n",A.sum);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
