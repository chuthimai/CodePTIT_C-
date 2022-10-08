//
//  CPP0342_tach_chu_so.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    cin>>str;
    int n = 0;
    int change = '0' - 0;
    
    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i]) == 1){
            n += str[i] - change;
            str.erase(i,1);
            i--;
        }
    }
    sort(str.begin(), str.end());
    cout<<str<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
