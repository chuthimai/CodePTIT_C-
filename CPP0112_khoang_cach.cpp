//
//  CPP0112_khoang_cach.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 17/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    double xa, ya, xb, yb, d, x, y;
    cin>>xa>>ya>>xb>>yb;
    x=pow(xa-xb, 2);
    y=pow(ya-yb, 2);
    d=pow(x+y, 0.5);
    printf("%.4f\n",d);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
