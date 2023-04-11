#include<iostream>
#include<iomanip>
#include<fstream>
#include <string.h> 
using namespace std; 
struct hocsinh
{
	char mahs[15];
	char tenhs[15];
	float tb;
	char hk[10];
};
main()
{
	int n;
	fstream f("hocsinh.txt",ios::in);
	if(!f)
	{
		cout<<"Khong the tao duoc tep tin "<<f<<endl;
		exit(1);
	}
	f>>n;
	hocsinh a[n];
	for(int i=0;i<n;i++)
	{
		f>>a[i].mahs;
		f>>a[i].tenhs;
		f>>a[i].tb;
		f>>a[i].hk;
	}
	f.close();
	cout<<"\t\t\t--DANH SACH HOC SINH--"<<endl;
	cout<<setw(15)<<"Ma hoc sinh"<<setw(20)<<"Ten hoc sinh";
	cout<<setw(20)<<"Diem trung binh"<<setw(15)<<"Hanh kiem"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<setw(15)<<a[i].mahs;
		cout<<setw(20)<<a[i].tenhs;
		cout<<setw(20)<<a[i].tb;
		cout<<setw(15)<<a[i].hk<<endl;
	}
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(stricmp(a[i].tenhs,"Trung")==0 && stricmp(a[i].hk,"TB")==0)
			d++;
		if(stricmp(a[i].tenhs,"Anh")==0 && a[i].tb>8.0)
			d++;		
	}
	fstream f1("kq.txt",ios::out);
	if(!f1)
	{
		cout<<"Khong the tao tep tin "<<f1<<endl;
		exit(1);
	}
	f1<<"So hoc sinh ten 'Trung' hanh kiem 'TB' hoac hoc sinh ten 'Anh' co diem trung binh>8.0 la: "<<d;
}










