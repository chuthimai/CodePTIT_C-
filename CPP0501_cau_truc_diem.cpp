//
//  CPP0501_cau_truc_diem.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 23/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct Point{
    double x,y;
};

void input(Point &A){
    cin>>A.x>>A.y;
}
double distance(Point A, Point B){
    double res=sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
    return res;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}


