//
//  CPP0319_nho_nhat_lon_nhat.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 31/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;
    vector<int> largest, smallest;
    int s,a; cin>>s;
    a=s;
    if((s==0 && m>1) || s>9*m) printf("-1 -1\n");
    else{
        for(int i=0;i<m;i++){
            if(a>0){
                if(a/9!=0){
                    largest.push_back(9);
                    a-=9;
                }else{
                    largest.push_back(a);
                    a=0;
                }
            }else largest.push_back(0);
        }
        
        int n=0;
        if(s/9==m-1) n=s%9;
        else if (s/9==m) n=9;
        else n=1;
        s=s-n;
        
        for(int i=0;i<m;i++){
            if(i==m-1){
                smallest.push_back(n);
                break;
            }
            if(s>0){
                if(s/9!=0){
                    smallest.push_back(9);
                    s-=9;
                }else{
                    smallest.push_back(s);
                    s=0;
                }
            }else smallest.push_back(0);
        }
    }
    
    for(int i=smallest.size()-1;i>=0;i--) printf("%d",smallest[i]);
    printf(" ");
    for(int i=0;i<largest.size();i++) printf("%d",largest[i]);
    printf("\n");
}
