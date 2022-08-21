//
//  CPP0127_cap_so_nguyen_to_dau_tien_co_tong_bang_n.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 19/08/2022.
//

//#include <bits/stdc++.h>
//#define ui unsigned int
//using namespace std;
//
//int sang[1000001];
//
//void oneTime(){
//    ui n;
//    cin>>n;
//    for(ui i=2;i<1000001;i++){
//        ui j;
//        if(sang[i]==1){
//            for(j=i;j<1000001;j++){
//                if(j>n) break;
//                if(sang[j]==1){
//                    if(j+i==n){
//                        printf("%u %u\n",i,j);
//                        break;
//                    }
//                }
//            }
//        }
//        if(j+i==n) break;
//        if(i>n/2+1){
//            printf("-1\n");
//            break;
//        }
//    }
//}
//
//int main(){
//    
//    sang[0]=0;sang[1]=0;
//    for(ui i=2;i<1000001;i++) sang[i]=1;
//    for(ui i=2;i<1000001;i++){
//        if(sang[i]==1)
//            for(ui j=i*2;j<1000001;j=j+i) sang[j]=0;
//    }
//    
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++) oneTime();
//}
