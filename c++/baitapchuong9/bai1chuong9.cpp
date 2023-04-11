#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
 int tinhluong( int hesoluong ) ;
 
 typedef struct {
 	 char manv[25];
	 char tennv[20];
	  float  hesoluong; 
 	
 	
}quanli; 
//struct doiten  {char ten[20]; 
//}; 

void in(   quanli * nv,int n) ;
 
 float tinhluong(  float hesoluong) {

 float 	luongcb=hesoluong*27500;
float 	 phu_cap=luongcb*0.25; 
 float tong_luong=luongcb+phu_cap; 
 
  
 	return tong_luong; 
	 }
 
 
 void in(   quanli * nv,int n) {
 cout<<"\n\n--- DANH SACH NHAN VIEN---"<<endl;
 cout<<setw(10)<<"        ma nhan vien "<<setw(25)<<"ten nhan vien"<<setw(38)<<" he so luong"<<endl;
 
for (int i=0;i<n;i++)
 
{
cout<<setw(15)<<nv[i].manv;
cout<<setw(26)<<nv[i].tennv; 
cout<<setw(37)<<nv[i].hesoluong<<endl;
}
 
}		 
 
main(){
	int n,i;
do 	{
	cout<<"nhap so nhan vien  "; cin>>n; }while(n<=0) ;
	
	quanli nv[n];
	
	
	
for(i=0;i<n;i++)
{ cin.ignore();
cout<<"\n--Nhap ten nhan vien  "<< i+1<<"----"<<endl;

cout<<"\nTen nhan vien : " ;
cin.getline(nv[i].tennv,25);
cout<<"Ma nhan vien : "; cin.getline(nv[i].manv,10);
 
cout<<"\nhe so luong : ";cin>>nv[i].hesoluong;
}

 in(nv,n) ;               
 
for  (int i=0;i<n;i++) {
 	quanli tg ; 
  		for( int k=0;k<=i;k++){
		if(nv[i].hesoluong>nv[k].hesoluong)
		{ 
      tg=nv[i];
	  nv[i]=nv[k];
	  nv [k]=tg ;
		}
  		}
		 }
		 cout<<"\n\n--DANH SACH NHAN VIEN SAU KHI SAP XEP--"<<endl;
	cout<<setw(10)<<"ma nhan vien"<<setw(25)<<"ten nhan vien"<<setw(15)<<"he so luong"<<setw(15)<<"tong luong"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<setw(10)<<nv[i].manv;
		cout<<setw(25)<<nv[i].tennv;
		cout<<setw(15)<<nv[i].hesoluong;
		cout<<setw(15)<<tinhluong(nv[i].hesoluong)<<endl;
	}

 














 
}













