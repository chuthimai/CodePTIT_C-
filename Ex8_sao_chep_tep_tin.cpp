//
//  Ex8_sao_chep_tep_tin.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ifstream in {"PTIT.in"};
    ofstream out {"PTIT.out"};
    out.clear();
    string str;
    
    while (in>>str) {
        out<<str<<endl;
    }
    
    in.close();
    out.close();
    
}

