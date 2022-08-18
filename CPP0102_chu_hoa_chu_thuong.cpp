//
//  CPP0102_chu_hoa_chu_thuong.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <iostream>

using namespace std;

void oneTime(){
    int a='A'-'a';
    char n;
    cin>>n;
    if(n>='A'&&n<='Z') printf("%c\n",n-a);
    if(n>='a'&&n<='z') printf("%c\n",n+a);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        oneTime();
    }
}
