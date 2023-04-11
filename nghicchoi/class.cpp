#include<iostream>
#include<Windows.h>
using namespace std;
class phanso;
class so;
 class so{
   
    private:
    int sothuc,soao;
    public:
   // void update(phanso&x);
    void nhap();
    void xuat();
};
void so::xuat(){
   cout<<sothuc<<" "<<soao;
}
void so::nhap(){
   cout<<"nhap so thuc ";
   cin>>sothuc;
   cout<<"nhap so ao ";
   cin>>soao;
 }
 class phanso
 {
 private:
 int tu,mau;

 so ds;
 public:
//  phanso(int,int);
//  phanso();
 int Tu(int);
    void dihoc();
    void hi();
    friend istream& operator >> (istream &in ,phanso &x);
    friend  ostream& operator << (ostream &out ,phanso x);
    void nhap();
    void xuat();
    friend class so;

 };

 void phanso::nhap(){
   ds.nhap();
 }
 void phanso::xuat(){
   ds.xuat();
   
 }

//  phanso::phanso(int tu,int mau){
//     this->tu=tu;
//     this->mau;
//  }
void phanso::hi(){
   cout<<"hen gap lai";
}
  void phanso::  dihoc(){
    cout<<"dit me cuoc doi";
 }
 int phanso::Tu(int x){
    this->tu=x;
    
    return this->tu;
 }
  istream& operator >> (istream &in ,phanso &x){
    cout<<"nhap tu ";in>>x.tu;
    cout<<"nhap mau ";in>>x.mau;
  
   
    return in;

 }
 ostream& operator << (ostream &out ,phanso x){
   out<<x.tu<<" "<<x.mau<<" ";

    return out;

 }

// void so :: update(phanso &x){
//    cin>>soao;
//  x.mau=10;
//  x.tu=10;
// }
 
main(){
  
    
   //  phanso x;
   //  cin>>x;
   //  cout<<x;
    phanso x[2];
    for(int i=0;i<2;i++){
        cout<<"so thu nhat "; cin>>x[i];
        x[i].nhap();
       
    }
    for(int i=0;i<2;i++){
        cout<<x[i];
        x[i].xuat();
        cout<<endl;

    }
    
    so y[2];
   //  y.update(x[0]);
   //  // cout<<"nhap su thay doi "; cin>>y;j
   //  for(int i=0;i<2;i++){
   //     cout<< x[i]<<endl;
   //  }
   
// printf("hidf");
// for(int i=0;i<2;i++){
//    y[i].nhap();
// }

}