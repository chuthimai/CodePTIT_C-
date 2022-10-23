//
//  CPP0725_tinh_so_to_hop.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 23/10/2022.
//

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll c[1005][1005];
// c[i][j] : luu to hop chap j cua i
const int mod = 1e9 +7;
void solve(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0|| j==i) c[i][j]=1;
            else c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
            
        }
        
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,r;
        cin>>n>>r;
        solve();
        cout<<c[n][r]<<endl;
        
    }
    
}
