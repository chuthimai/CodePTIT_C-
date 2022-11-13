////
////  Ex1.cpp
////  CodePTIT_C++
////
////  Created by Chu Mai on 16/08/2022.
////
////
//#include <bits/stdc++.h>
//using namespace std;
//
//int stt_theloai=0, stt_phim=0;
//
//class TheLoai{
//protected:
//    int stt;
//    string name;
//public:
//    friend istream& operator >>(istream& in, TheLoai &item){
//        item.stt = ++stt_theloai;
//        getline(in, item.name);
//        return in;
//    }
//    friend void process(TheLoai tl[100], int n, Phim p[10000], int m);
//};
//
//class Phim{
//protected:
//    int stt;
//    string theloai;
//    string date;
//    string name;
//    int ep;
//public:
//    friend istream& operator >>(istream& in, Phim &item){
//        stt_phim++;
//        in>>item.theloai;
//        in.ignore();
//        getline(in, item.date);
//        getline(in, item.name);
//        in>>item.ep;
//        return in;
//    }
//    
//    friend ostream& operator <<(ostream& out,Phim item){
//        out<<"P"<<item.stt<<" "<<item.theloai<<" "<<item.date<<" "<<item.name<<" "<<item.ep<<endl;
//        return out;
//    }
//    friend void process(TheLoai tl[100], int n, Phim p[10000], int m);
//};
//
//void process(TheLoai tl[100], int n, Phim p[1000], int m){
//    
//}
//
//int main(){
//    int n, m;
//    cin >> n >> m;
//    cin.ignore();
//    TheLoai tl[100];
//    Phim p[1000];
//    for(int i=0; i<n; i++){
//        cin >> tl[i];
//    }
//    for(int i=0; i<m; i++){
//        cin >> p[i];
//    }
//    process(tl, n, p, m);
//    for(int i=0; i<m; i++){
//        cout << p[i];
//    }
//}
