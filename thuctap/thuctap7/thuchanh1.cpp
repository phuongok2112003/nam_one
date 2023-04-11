
#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;

 typedef struct  {
     char msp[10],tensp[15];
     float soluong,dongia;
  
  
} sp ;
void nhap(int &n,sp x[]){
     cout<<"Nhap so luong san pham la "; cin>>n;
     for(int i=0;i<n;i++){
         cout<<"San pham thu "<<i+1<<endl;
         cin.ignore();
         
      cout<<"Nhap ma san pham "; cin.getline(x[i].msp,10);
      cout<<"Nhap ten sam pham "; cin.getline(x[i].tensp,15);
      cout<<"Nhap so luong san pham "; cin>>x[i].soluong;
      cout<<"Nhap don gia san pham "; cin>>x[i].dongia;

     }

}
void in(int n,sp x[]){
cout<<"\t\t---------------Bang in san pham ------"<<endl;
cout<<setw(15)<<"Ma san pham "<<setw(25)<<"Ten san pham "<<setw(20)<<"So luong san pham "<<setw(25)<<"Don gia cua san pham "<<endl;
for(int i=0;i<n;i++){

    cout<<setw(12)<<x[i].msp<<setw(26)<<x[i].tensp<<setw(15)<<x[i].soluong<<setw(25)<<x[i].dongia<<endl;
}}
void intheoyc(int n,sp x[]){

cout<<"\t\t---------------Bang in san pham <20.0000------"<<endl;

cout<<setw(15)<<"Ma san pham "<<setw(25)<<"Ten san pham "<<setw(20)<<"So luong san pham "<<setw(25)<<"Don gia cua san pham "<<endl;
for(int i=0;i<n;i++){
    if(x[i].dongia<200000)
    cout<<setw(12)<<x[i].msp<<setw(26)<<x[i].tensp<<setw(15)<<x[i].soluong<<setw(25)<<x[i].dongia<<endl;
}

}
int main() {
   int n;
sp*x=new sp[n];
nhap(n,x);
in(n,x);
intheoyc(n,x);
delete[]x;

}