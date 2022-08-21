//
//  CPP0143_so_Fib_thu_n.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 20/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    long long int Fib=1,Fib_prev=0,Fib_next;
    if(n==1) printf("1\n");
    else{
        for(int i=1;i<n;i++){
            Fib_next=Fib+Fib_prev;
            Fib_prev=Fib;
            Fib=Fib_next;
        }
        printf("%lli\n",Fib_next);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) oneTime();
}
