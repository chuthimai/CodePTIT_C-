//
//  CPP0205_day_tam_giac.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 26/08/2022.
//

#include <bits/stdc++.h>
#define ui unsigned int
using namespace std;

void oneTime(){
    ui n;
    cin>>n;
    ui max=0;
    for(int i=0;i<n;i++){
        ui a;
        cin>>a;
        if(a>max) max=a;
    }
    printf("%u\n",max);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
