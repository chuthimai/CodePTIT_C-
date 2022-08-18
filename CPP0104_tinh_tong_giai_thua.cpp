//
//  CPP0104_tinh_tong_giai_thua.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <iostream>
using namespace std;

int main(){
    unsigned long long n,sum=0,mem=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        mem*=i;
        sum+=mem;
    }
    cout<<sum<<endl;
}
