//
//  CPP0527_sap_xep_thoi_gian.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 08/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct Time{
    int hour;
    int minute;
    int second;
    int sum_sec = 0;
};

bool compare(Time a, Time b){
    return a.sum_sec<b.sum_sec;
}

int main(){
    Time arr[5001];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i].hour >>arr[i].minute >>arr[i].second;
        arr[i].sum_sec = arr[i].hour *60*60 + arr[i].minute*60 + arr[i].second;
    }
    sort(arr, arr+n, compare);
    
    for(int i=0; i<n; i++){
        cout<<arr[i].hour<<" "<<arr[i].minute<<" "<<arr[i].second<<endl;
    }
}
