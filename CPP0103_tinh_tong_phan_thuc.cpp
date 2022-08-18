//
//  CPP0103_tinh_tong_phan_thuc.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n;
    scanf("%ui",&n);
    double sum=0;
    for(int i=1;i<=n;i++) sum=sum+1/double(i);
    printf("%.4f\n",sum);
}
