//
//  Ex1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream input("Hello.txt");
    string num;
    getline(input,num);
    cout<<num<<endl;
    input.close();
}
