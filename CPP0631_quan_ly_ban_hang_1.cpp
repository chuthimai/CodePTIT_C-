//
//  CPP0631_quan_ly_ban_hang_1.cpp
//  CodePTIT_C++
//
//  Created by Chu Mai on 28/09/2022.
//

#include <bits/stdc++.h>
using namespace std;

int count_cus=1;
int count_item=1;
int count_bill=1;

string numToString(int a){
    string num="";
    int x='0'-0;
    while(a!=0){
        char n = a%10+x;
        num += n;
        a /= 10;
    }
    while(num.length()<3) num = "0"+num;
    return num;
    
}


class KhachHang{
    
public:
    string code="KH";
    string name;
    string sex;
    string date;
    vector<string> ddmmyy;
    string address;
    
public:
    KhachHang(){
        code = code + numToString(count_cus++);
    }
    void process_date(){
        date += "/";
        string str = "";
        for(int i=0; i<date.length(); i++){
            if(date[i] != '/') str += date[i];
            else{
                if(str.length()==1) str = "0" + str;
                ddmmyy.push_back(str);
                str = "";
            }
        }
    }
    
    friend istream& operator >>(istream& in, KhachHang &customer){
//        in.ignore();
        getline(in, customer.name);
        in >>customer.sex >>customer.date;
        in.ignore();
        getline(in, customer.address);
        
        return in;
    }
    
};


class MatHang{
    
public:
    string code="MH";
    string name;
    string unit;
    int price_buy;
    int price_sell;

public:
    MatHang(){
        code = code + numToString(count_item++);
    }
    friend istream& operator >>(istream& in, MatHang &item){
        
        in.ignore();
        getline(in, item.name);
        in >>item.unit >>item.price_buy >>item.price_sell;
        
        return in;
    }
};


KhachHang dskh[25];
MatHang dsmh[45];
int N,M;

class HoaDon: public KhachHang, public MatHang{
private:
    string code="HD";
    string code_customer;
    string code_item;
    int amount;
    int sum;

public:
    HoaDon(){
        code = code + numToString(count_bill++);
    }
    friend istream& operator >>(istream& in, HoaDon &bill){
        
        in>>bill.code_customer >>bill.code_item;
        in>>bill.amount;
        return in;
    }
    
    friend ostream& operator <<(ostream& out, HoaDon bill){
        //kt ma khach hang co trung khong
        for(int i=0; i<N; i++){
            if(dskh[i].code==bill.code_customer){
                bill.KhachHang::name = dskh[i].name;
                bill.KhachHang::address = dskh[i].address;
                break;
            }
        }
        //kt ma mat hang co trung khong
        for(int i=0; i<M; i++){
            if(dsmh[i].code==bill.code_item){
                bill.MatHang::name = dsmh[i].name;
                bill.unit = dsmh[i].unit;
                bill.price_buy  = dsmh[i].price_buy;
                bill.price_sell = dsmh[i].price_sell;
                bill.sum = bill.price_sell*bill.amount;
            }
        }
        
        out <<bill.code <<' ' << bill.KhachHang::name <<' ' <<bill.KhachHang::address <<' ';
        out <<bill.MatHang::name <<' ' <<bill.unit <<' ' <<bill.price_buy <<' '<<bill.price_sell <<' ';
        out <<bill.amount<<' '<<bill.sum <<endl;
        return out;
    }
};


int main(){
//    KhachHang dskh[25];
//    MatHang dsmh[45];
    HoaDon dshd[105];
    int K,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
