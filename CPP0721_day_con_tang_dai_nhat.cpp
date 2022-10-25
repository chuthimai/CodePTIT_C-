//
//  CPP0721_day_con_tang_dai_nhat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 25/10/2022.
//

#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    while(k--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int res[n];
        int count = 0;
        for(int i = 0; i < n; i++) {
            int max = 0;
            for(int j = 0; j < i; j++) {
                if(a[i] > a[j]) {
                    if(max < res[j]) max = res[j];
                    
                }
                
            }
            res[i] = max + 1;
            count = count < res[i] ? res[i] : count;
            
        }
        cout << count << endl;
        
    }
    
}
