//
//  CPP0420_sap_xep_theo_khoang_cach.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct Number{
    int num;
    int disance;
};
bool compare(Number a1, Number a2){
    return a1.disance<a2.disance;
}
void oneTime(){
    int n, m;
    cin>>n>>m;
    
    Number arr[100001];
    for(int i=0; i<n; i++){
        cin>>arr[i].num;
        arr[i].disance = abs(m - arr[i].num);
    }
    
    stable_sort(arr, arr+n, compare);
    
    for(int i=0; i<n; i++){
        printf("%d ",arr[i].num);
    }
    
    cout<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
