//
//  CPP0123_kiem_tra_nguyen_to.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 18/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n<2) printf("NO\n");
    else if (n==2 || n==3) printf("YES\n");
    else{
        int q=sqrt(n)+1;
        for(int i=1;i<q;i++){
            if(n%i==0){
                if(i!=1) {
                    printf("NO\n");
                    break;
                }
            }
            if(i>=q-1 && n%i!=0) printf("YES\n");
        }
    }
    
}
