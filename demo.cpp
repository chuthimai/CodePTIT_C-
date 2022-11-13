////
////  demo.cpp
////  CodePTIT_C++
////
////  Created by Chu Mai on 02/10/2022.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//class thoigian{
//private:
//    int thang;
//    int nam;
//public:
//    //char sang thoigian
//    thoigian charToThoigian(string s){
//        string time = "";
//        thoigian T(0,0);
//        int change = '0'-0;
//        for(int i=0; i<s.length(); i++){
//            if(isdigit(s[i])) time.push_back(s[i]);
//        }
//        for(int i=0; i<time.length(); i++){
//            if (i>=time.length()-5){
//                T.nam = T.nam*10 + s[i] - change;
//            }else{
//                T.thang = T.thang*10 + s[i] - change;
//            }
//        }
//        return T;
//    }
//    
//    //thoigian sang char
//    string thoigianToChar(thoigian T){
//        string res;
//        string month="", year="";
//        int change = '0'-0;
//        while(T.thang > 0){
//            char s = T.thang%10 + change;
//            month.push_back(s);
//            T.thang /= 10;
//        }
//        reverse(month.begin(), month.end());
//        while(T.nam > 0){
//            char s = T.nam%10 + change;
//            year.push_back(s);
//            T.nam /= 10;
//        }
//        reverse(year.begin(), year.end());
//        res = "thang "+ month+" nam "+year;
//        return res;
//    }
//    
//    thoigian(int month, int year){
//        thang = month;
//        nam = year;
//    }
//    
//    void nhapbp(){
//        cin>>thang>>nam;
//    }
//    
//    void xemmh(){
//        cout<<"thang "<<thang<<" nam "<<nam<<endl;
//    }
//    
//    //so sanh thoi gian
//    friend bool operator > (thoigian &t1, thoigian &t2){
//        if(t1.nam > t2.nam) return true;
//        else if(t1.nam < t2.nam) return false;
//        else{
//            if(t1.thang > t2.thang) return true;
//            else return false;
//        }
//    }
//    
//    //toan tu --
//    
//    friend thoigian operator -- (thoigian &t1){
//        if (t1.thang>0){
//            t1.thang --;
//            return t1;
//        }else{
//            t1.thang = 11;
//            t1.nam --;
//            return t1;
//        }
//    }
//    
//    //toan tu +
//    friend thoigian operator + (thoigian &t1, thoigian &t2){
//        thoigian T(0, 0);
//        T.thang = t1.thang+t2.thang;
//        T.nam = t1.nam+t2.nam;
//        if (T.thang >12){
//            T.nam += T.thang/12;
//            T.thang = T.thang%12;
//        }
//        
//        return T;
//    }
//    
//    //toan tu -
//    friend int operator - (thoigian &t1, thoigian &t2){
//        thoigian T(0, 0);
//        T.thang = t1.thang-t2.thang;
//        T.nam = t1.nam-t2.nam;
//        if (T.thang <0){
//            T.nam --;
//            T.thang += 12;
//        }
//        T.thang += T.nam*12;
//        return T.thang;
//    }
//};
//
//
//
//
//
//
//
