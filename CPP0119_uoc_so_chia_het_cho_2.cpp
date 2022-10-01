//
//  CPP0119_uoc_so_chia_het_cho_2.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 01/10/2022.
//

#include<iostream>
#include<math.h>
using namespace std;

int check(int a){
    int q=0;
    for(int i=1; i<=sqrt(a); i++){
        if(a%i==0){
            if(i%2==0) q++;
            if((a/i)%2==0) q++;
            if(i*i==a && a%2==0) q--;
            
        }
        
    }
    return q;
    
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        cout << check(a) << endl;
        
    }
    
}
