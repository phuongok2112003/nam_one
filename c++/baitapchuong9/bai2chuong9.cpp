#include<iostream>
#include <iomanip>
#include <string.h>

using namespace std;
int diem_tb(float toan,float li ,float hoa);
 
 
 struct hoc_sinh {
 	char mahs[25];
	 char tenhs[20];
	  char gioitinh[10];
	  float  toan;
	  float li;
	  float hoa;  
	  }; 
	  
	  int diem_tb(float toan,float li ,float hoa) {float diemtb; 
	  	  diemtb=(toan*4+li*3+hoa*2)/9;
		   return diemtb; 
	  }
	  xethocluc( float diemtb){
	  	if(diemtb>=9) {
		   return 1;}
	  	if (diemtb<9&&diemtb>=8){
		   return 2;}
	  	if(diemtb>=6.5&&diemtb<8) {
		return 3;}
	  	if (diemtb>=5&&diemtb<6.5){
		  return 4 ;}
	  	if(diemtb<5) {
		   return 5;}
		   
	  
	  }
	  void in(   hoc_sinh * hs,int n) {
 cout<<"--------------------------------- DANH SACH HOC SINH ---------------------------------\n"<<endl;
 cout<<setw(12)<<"ma hoc sinh "<<setw(20)<<"ten hoc sinh"<<setw(15)<<" gioi tinh "<<setw(15)<<" diem toan "<<setw(15)<<" diem li "<<setw(15)<<"diem hoa "<<setw(15)<<"diem tb"<<endl;
 
for (int i=0;i<n;i++)
 
{
cout<<setw(6)<<hs[i].mahs;
cout<<setw(21)<<hs[i].tenhs; 
cout<<setw(15)<<hs[i].gioitinh;
cout<<setw(15)<<hs[i].toan;
 cout<<setw(16)<<hs[i].li;
 cout<<setw(15)<<hs[i].hoa;
 cout<<setw(17)<<diem_tb(hs[i].toan,hs[i].li,hs[i].hoa) <<endl; 

}

}
	   main(){ 	
	  int n,i; 
do 	{
	cout<<"nhap so hoc sinh "; cin>>n; }while(n<=0) ;
	
	hoc_sinh hs[n];
	for(i=0;i<n;i++)
{ cin.ignore();
cout<<"\n--Nhap ten hoc sinh  "<< i+1<<"----"<<endl;

cout<<"\nTen hoc sinh  : " ;
cin.getline(hs[i].tenhs,25);
cout<<"Ma hoc sinh : "; cin.getline(hs[i].mahs,10);
 
cout<<"\ngioi tinh  : ";
cin.getline(hs[i].gioitinh,6);

 do {
cout<<"\nnhap diem toan  : ";
cin>>hs[i].toan; }while(hs[i].toan>10||hs[i].toan<0); 
do{
cout<<"\nnhap diem li   : ";
cin>>hs[i].li;}while(hs[i].li>10||hs[i].li<0); 
do{
cout<<"\nnhap diem hoa : ";
cin>>hs[i].hoa;}while(hs[i].hoa>10||hs[i].hoa<0); 
 
}

in(hs,n) ;

	
	

	
	cout<<"--------------------------------- DANH SACH HOC SINH NU DAT DANH HIEU HS GIOI , XUAT SAC ---------------------------------\n"<<endl;
 cout<<setw(12)<<"ma hoc sinh "<<setw(20)<<"ten hoc sinh"<<setw(15)<<" gioi tinh "<<setw(15)<<" diem toan "<<setw(15)<<" diem li "<<setw(15)<<"diem hoa "<<setw(15)<<"diem tb"<<setw(15)<<"danh hieu"<<endl;
 
 	for(i=0;i<n;i++){
		
	int kt=stricmp(hs[i].gioitinh,"nu");
		if((kt==0 && xethocluc(diem_tb(hs[i].toan,hs[i].li,hs[i].hoa))==1)||(kt==0&&xethocluc(diem_tb(hs[i].toan,hs[i].li,hs[i].hoa))==2)){
			
	

cout<<setw(6)<<hs[i].mahs;
cout<<setw(21)<<hs[i].tenhs; 
cout<<setw(15)<<hs[i].gioitinh;
cout<<setw(15)<<hs[i].toan;
 cout<<setw(16)<<hs[i].li;
 cout<<setw(15)<<hs[i].hoa;
 cout<<setw(17)<<diem_tb(hs[i].toan,hs[i].li,hs[i].hoa) ; 
 if(xethocluc(diem_tb(hs[i].toan,hs[i].li,hs[i].hoa))==1) cout<<setw(18)<<"xuat sac "<<endl ;
 if(xethocluc(diem_tb(hs[i].toan,hs[i].li,hs[i].hoa))==2) cout<<setw(18)<<"  gioi  " <<endl;
  
		
		}
		
		
}
	
	
	  } 
	  
	  
	
	

	
	

 	
 	

