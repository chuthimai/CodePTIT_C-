//
//  CPP0804_liet_ke_tu_khac_nhau.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 13/11/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream file;
    file.open("VANBAN.in");
    vector<string> arr;
    string x;
    while(file>>x){
        for(int i=0; i<x.length(); i++){
            if(x[i]>='A' && x[i]<='Z') x[i] = x[i] - ('A'-'a');
        }
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    file.close();
}


