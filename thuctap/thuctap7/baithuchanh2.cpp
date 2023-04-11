
#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;

 typedef struct  {
     char mso[10],hoten[30];
     int somon,hocki;
  
  
} giangvien ;
void nhap(int &n,giangvien x[]){
     cout<<"Nhap so luong san pham la "; cin>>n;
     for(int i=0;i<n;i++){
         cout<<"San pham thu "<<i+1<<endl;
         cin.ignore();
         
      cout<<"Nhap ma  giang vien "; cin.getline(x[i].mso,10);
      cout<<"Nhap ten giang vien "; cin.getline(x[i].hoten,30);
      cout<<"Nhap so luong mon hoc "; cin>>x[i].somon;
      cout<<"Nhap so hoc ki "; cin>>x[i].hocki;

     }

}
void in(int n,giangvien x[]){
cout<<"\t\t---------------Bang in danh sach giang vien ------"<<endl;
cout<<setw(15)<<"Ma giang vien "<<setw(25)<<"Ho ten giang vien "<<setw(20)<<"So mon hoc "<<setw(25)<<"So hoc ki "<<endl;
for(int i=0;i<n;i++){

     cout<<setw(12)<<x[i].mso<<setw(27)<<x[i].hoten<<setw(17)<<x[i].somon<<setw(25)<<x[i].hocki<<endl;
}}
void intheoyc(int n,giangvien x[]){

cout<<"\t\t---------------Bang in danh sach cach giang vien co so mon day trem mot hoc ki >5-----"<<endl;

cout<<setw(15)<<"Ma giang vien "<<setw(25)<<"Ho ten giang vien "<<setw(20)<<"So mon hoc "<<setw(25)<<"So hoc ki "<<endl;
for(int i=0;i<n;i++){
    if(x[i].somon>5)
   cout<<setw(12)<<x[i].mso<<setw(27)<<x[i].hoten<<setw(17)<<x[i].somon<<setw(25)<<x[i].hocki<<endl;
}

}
int main() {
   int n;
giangvien*x=new giangvien[n];
nhap(n,x);
in(n,x);
intheoyc(n,x);
delete[]x;

}