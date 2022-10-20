//
//  CPP0713_liet_ke_hoan_vi.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 14/10/2022.
//

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr, int n){
    int save;
    
    for(int i=n-1; i>0; i--){
        if(arr[i-1]<arr[i]){
            save = i-1;
            break;
        }
    }
    
    for(int i=n-1; i>0; i--){
        if(arr[save]<arr[i]){
            swap(arr[save], arr[i]);
            break;
        }
    }
    sort(arr.begin()+save+1,arr.end());
}

void in(vector<int> arr, int n){
    for(int i=0; i<n; i++) printf("%d", arr[i]);
    printf(" ");
}

void oneTime(){
    int n;
    cin>>n;
    vector<int> permutation, last;
    for(int i=0; i<n; i++) {
        permutation.push_back(i+1);
        last.push_back(n-i);
    }
    
    while (permutation != last) {
        in(permutation, n);
        nextPermutation(permutation, n);
    }
    in(last, n);
    cout<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
