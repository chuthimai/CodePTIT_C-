//
//  CPP0109_can_bang_chan_le.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

bool check(unsigned int a){
    int even=0,odd=0;
    while(a!=0){
        int lastNum=a%10;
        if(lastNum%2==0) even++;
        else odd++;
        a/=10;
    }
    if(even==odd) return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    unsigned int start=pow(10, n-1),end0=pow(10, n);
    
    int count=0;
    
    for(unsigned int i=start; i<end0; i++){
        if(check(i)==true){
            printf("%d ",i);
            count++;
        }
        
        if(count==10){
            cout<<endl;
            count=0;
        }
    }
}


