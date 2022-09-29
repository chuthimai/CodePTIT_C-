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
    
protected:
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
        customer.code = count_cus++;
        in.ignore();
        getline(in, customer.name);
        in >>customer.sex >>customer.date;
        in.ignore();
        getline(in, customer.address);
        
        return in;
    }
    
};


class MatHang{
    
protected:
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
        item.code = count_item++;
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

public:
    HoaDon(){
        code = code + numToString(count_bill++);
    }
    friend istream& operator >>(istream& in, HoaDon &bill){
        bill.code = count_bill++;
        in>>bill.code_customer >>bill.code_item;
        in>>bill.amount;
        return in;
    }
    
    friend ostream& operator <<(ostream& out, HoaDon bill){
        out <<bill.code <<' ' << bill.KhachHang::name <<' ' <<bill.KhachHang::address <<' ';
        out <<bill.MatHang::name <<' ' <<bill.unit <<' ' <<bill.price_buy <<' '<<bill.price_sell <<' ';
        out <<bill.amount<<' ';
        return out;
    }
};


int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
