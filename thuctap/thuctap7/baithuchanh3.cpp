
#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;

 typedef struct  {
     char msv[10],hoten[30];
    float diem_thuchanh,diemly_thuyet;
  
  
}sinhvien ;
void nhap(int &n,sinhvien x[]){
     cout<<"Nhap so luong sinh vien la "; cin>>n;
     for(int i=0;i<n;i++){
         cout<<"Sinh vien thu "<<i+1<<endl;
         cin.ignore();
         
      cout<<"Nhap ma  giang vien "; cin.getline(x[i].msv,10);
      cout<<"Nhap ten sinh vien "; cin.getline(x[i].hoten,30);
      cout<<"Nhap diem ly thuyet "; cin>>x[i].diemly_thuyet;
      cout<<"Nhap diem thuc hanh  "; cin>>x[i].diem_thuchanh;

     }

}
void in(int n,sinhvien x[]){
cout<<"\t---------------Bang in danh sach giang vien ---------------"<<endl;
cout<<'\n';

cout<<setw(15)<<"Ma sinh vien "<<setw(25)<<"Ho ten sinh vien "<<setw(20)<<"Diem thuc hanh "<<setw(25)<<"Diem ly thuyet "<<endl;
for(int i=0;i<n;i++){

     cout<<setw(12)<<x[i].msv<<setw(27)<<x[i].hoten<<setw(17)<<x[i].diem_thuchanh<<setw(25)<<x[i].diemly_thuyet<<endl;

}
cout<<"\n\n";
}
void intheoyc1(int n,sinhvien x[]){

cout<<"\t---------------Bang in danh sach cach sinh vien bi truot ly thuyet---------------"<<endl;
cout<<'\n';

cout<<setw(15)<<"Ma sinh vien "<<setw(25)<<"Ho ten sinh vien "<<setw(20)<<"Diem thuc hanh "<<setw(25)<<"Diem ly thuyet "<<endl;
for(int i=0;i<n;i++){
    if(x[i].diemly_thuyet <5){

 
   cout<<setw(12)<<x[i].msv<<setw(27)<<x[i].hoten<<setw(17)<<x[i].diem_thuchanh<<setw(25)<<x[i].diemly_thuyet<<endl;   }
}
cout<<"\n\n";
}
void intheoyc2(int n,sinhvien x[]){

cout<<"\t---------------Bang in danh sach cach sinh vien bi truot thuc hanh---------------"<<endl;
cout<<'\n';

cout<<setw(15)<<"Ma sinh vien "<<setw(25)<<"Ho ten sinh vien "<<setw(20)<<"Diem thuc hanh "<<setw(25)<<"Diem ly thuyet "<<endl;
for(int i=0;i<n;i++){
    if(x[i].diem_thuchanh <5){

 
   cout<<setw(12)<<x[i].msv<<setw(27)<<x[i].hoten<<setw(17)<<x[i].diem_thuchanh<<setw(25)<<x[i].diemly_thuyet<<endl;   }
}

}
int main() {
   int n;
sinhvien*x=new sinhvien[n];
nhap(n,x);
in(n,x);
intheoyc1(n,x);
intheoyc2(n,x);
delete[]x;

}