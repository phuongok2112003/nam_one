#include<fstream>
#include<iostream>
#include <iomanip>
#include <string.h>
using namespace std; 
 struct HS 
 {
 char mahs[15];
 char tenhs[15];
 float tb;
 char hk[10];	
 	
 }; 
 

  
 void xuat (int &n, HS hocsinh[]){
 	cout<<"--------------------------------- DANH SACH HOC SINH ---------------------------------\n";
 cout<<"\n"<<setw(12)<<"ma hoc sinh "<<setw(20)<<"ten hoc sinh"<<setw(15)<<" hanh kiem "<<setw(15)<<"trung binh  "<<endl;
 
for (int i=0;i<n;i++)
 
{
cout<<setw(6)<<hocsinh [i].mahs;
cout<<setw(21)<<hocsinh[i].tenhs; 
cout<<setw(15)<<hocsinh[i].hk;
cout<<setw(15)<<hocsinh[i].tb<<endl; 

}
}
 void  doc (char tentep[],int &n,HS hocsinh[])
{

ifstream f(tentep);
if(!f)   
{ cout << "Khong the doc duoc tep tin "<<f<<endl;
exit(1);

}  
f>>n;

	
 for (int i=0;i<n;i++) 
 {

f>>hocsinh[i].mahs>>hocsinh[i].tenhs>>hocsinh[i].hk>>hocsinh[i].tb;
  }


 
 xuat(n,hocsinh) ;	

f.close ();


 } 
  
void ghitep(char tentep[],int &n,HS hocsinh[])
{ 
ofstream f(tentep);

	int d=0,d1=0 ;
	for(int i=0;i<n;i++)
	{
		if(stricmp(hocsinh[i].tenhs,"Trung")==0 && stricmp(hocsinh[i].hk,"TB")==0)
			d++;
		if(stricmp(hocsinh[i].tenhs,"Anh")==0 && hocsinh[i].tb>8.0)
			d1++;		
	}



if(!f)
{ cout<<"Khong the tao duoc tep tin"<<f<<endl;
exit(1);

}
 
 
f<<"So hoc sinh ten 'Trung' hanh kiem 'TB' : "<<d;
 
 f<<"\nSo hoc sinh ten 'Anh' co diem trung binh>8.0 la : " <<d1; 
 f.close ();
	
 
}

int main()
{

	char f[30];
	
	int n ; 
  HS hocsinh[20]; 
cout<<"\n Nhap ten tep doc va ghi  du lieu: "; cin>>f;
doc(f,n,hocsinh );

cout<<"\n Nhap ten tep ghi du lieu :"; cin>>f;
ghitep(f,n,hocsinh) ;

}





















