//
//  CPP0803_so_khac_nhau_trong_file.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 13/11/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream file;
    int x;
    file.open("DATA.in");
    map<int, int> arr;
    while (file>>x) {
        arr[x]++;
    }
    for(auto i:arr){
        cout<<i.first<<" "<<i.second<<endl;
    }
}


