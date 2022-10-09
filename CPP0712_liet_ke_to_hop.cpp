//
//  CPP0712_liet_ke_to_hop.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 09/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n,m;
    cin>>m>>n;
    vector<int> arr, final_arr;
    for(int i=0; i<n; i++) {
        arr.push_back(i+1);
        final_arr.push_back(m-i);
    }
    
    reverse(final_arr.begin(), final_arr.end());
    
    bool loop=true;
    while (loop==true) {
        for(int i=0; i<n; i++) cout<<arr[i];
        printf(" ");
        
        if(arr == final_arr){
            loop = false;
            break;
        }
        
        for(int i=n-1; i>=0; i--){
            if(arr[i]<final_arr[i]){
                arr[i]++;
                if(i!=n-1){
                    for(int j=i+1; j<n; j++) arr[j] = arr[i] + j-i;
                }
                break;
            }
        }
        
    }
    printf("\n");
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
