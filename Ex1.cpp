//
//  Ex1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 16/08/2022.
//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//class DaThuc{
//private:
//    int a, b, c, d;
//public:
//    DaThuc(){
//        a = 0;
//        b = 0;
//        c = 0;
//        d = 0;
//        
//    }
//    
//    void hien_thi(){
//        if(a!=0) cout<<a<<"x^3";
//        if(b!=0) cout<<"+"<<b<<"x^2";
//        if(c!=0) cout<<"+"<<c<<"x";
//        if(d!=0) cout<<"+"<<d;
//        printf("\n");
//    }
//    
//    DaThuc tinh_tong(DaThuc da_thuc){
//        DaThuc tong;
//        tong.a = a + da_thuc.a;
//        tong.b = b + da_thuc.b;
//        tong.c = c + da_thuc.c;
//        tong.d = d + da_thuc.d;
//        return tong;
//    }
//    
//    void nhap(){
//        cin>>a >>b >>c >>d;
//    }
//    
//};
//
//int main(){
//    DaThuc da_thuc_1, da_thuc_2, da_thuc_tong;
//    da_thuc_1.nhap();
//    da_thuc_2.nhap();
//    da_thuc_tong = da_thuc_1.tinh_tong(da_thuc_2);
//    da_thuc_tong.hien_thi();
//}
