#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
struct sanpham
{
	char maxsp[10];
	char tensp[20];
	long dongia;
	int sl;
	long tt;
};
void nhapds(sanpham a[],int n)
{
	cout<<"\n--NHAP DANH SACH SAN PHAM--";
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"\n\n-Nhap thong tin san pham thu "<<i+1<<" :";
		cout<<"\nMa san pham: ";cin.getline(a[i].maxsp,10);
		cout<<"Ten san pham: ";cin.getline(a[i].tensp,20);
		cout<<"Don gia: ";cin>>a[i].dongia;
		cout<<"So luong: ";cin>>a[i].sl;
	}
}
void inds(sanpham a[],int n)
{
	cout<<"\n\n\t\t--DANH SACH SAN PHAM--"<<endl;
	cout<<setw(8)<<"Ma san pham"<<setw(20)<<"Ten san pham";
	cout<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<setw(8)<<a[i].maxsp;
		cout<<setw(20)<<a[i].tensp;
		cout<<setw(17)<<a[i].dongia;
		cout<<setw(15)<<a[i].sl<<endl;
	}
}
void inds1(sanpham a[],int n)
{
	cout<<"\n\n\t--DANH SACH SAN PHAM CO DON GIA>200000--"<<endl;
	cout<<setw(8)<<"Ma san pham"<<setw(20)<<"Ten san pham";
	cout<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<endl;
	for(int i=0;i<n;i++)
	if(a[i].dongia>200000)
	{
		cout<<setw(8)<<a[i].maxsp;
		cout<<setw(20)<<a[i].tensp;
		cout<<setw(17)<<a[i].dongia;
		cout<<setw(15)<<a[i].sl<<endl;
	}
}
void tinh(sanpham a[],int n)
{
	 for(int i=0;i<n;i++)
	 a[i].tt=a[i].sl*a[i].dongia;
}
void ghi(sanpham a[],int n)
{
	fstream f("Bai2.txt",ios::out);
	if(!f)
	{
		cout<<"Khong the tao tep tin "<<f<<endl;
		exit(1);
	}
	f<<"\t\t\t--DANH SACH SAN PHAM--"<<endl;
	f<<setw(8)<<"Ma san pham"<<setw(20)<<"Ten san pham";
	f<<setw(15)<<"Don gia"<<setw(15)<<"So luong";
	f<<setw(15)<<"Thanh tien"<<endl;
	for(int i=0;i<n;i++)
	{
		f<<setw(8)<<a[i].maxsp;
		f<<setw(20)<<a[i].tensp;
		f<<setw(17)<<a[i].dongia;
		f<<setw(15)<<a[i].sl;
		f<<setw(15)<<a[i].tt<<endl;
	}
	f.close();
}
void doc(sanpham a[],int n)
{
	char tieude[100];
	fstream f1("Bai2.txt",ios::in);
	if(!f1)
	{
		cout<<"Khoong the tao tep tin "<<f1<<endl;
		exit(1);
	}
	cout<<"\n\nDanh sach doc tu tep 'Bai2.txt'\n "<<endl;
	while(!f1.eof())
	{
		f1.getline(tieude,100);
		cout<<tieude<<endl;
	}
	f1.close();
}
main()
{
	int lc,n;
	sanpham a[100];
	do{
		cout<<"\n\t\t--MENU--\n";
		cout<<"\n1.Nhap danh sach n san pham ";
		cout<<"\n2.In danh sach san pham";
		cout<<"\n3.In danh sach san pham co don gia>200000";
		cout<<"\n4.Tinh thanh tien cua san pham";
		cout<<"\n5.Luu danh sach san pham vao tep 'Bai2.txt'";
		cout<<"\n6.Doc danh sach san pham tu tep 'Bai2.txt' va in ra man hinh";
		cout<<"\n0.Thoat"<<endl;
		cout<<"\nNhap lua chon cua ban: ";
		cin>>lc;
		switch(lc)
		{
			case 0:break;
			case 1:
			{
				cout<<"\nNhap so luong san pham: ";cin>>n;
				nhapds(a,n);
				break;
			}
			case 2:inds(a,n);break;
			case 3:inds1(a,n);break;
			case 4:
			{
				tinh(a,n);
				cout<<"\nDa tinh thanh tien cua san pham"<<endl;
				break;
			}
			case 5:
			{
				ghi(a,n);
				cout<<"\nDa ghi danh sach san pham vao tep 'Bai2.txt'"<<endl;
				break;
			}
			case 6:doc(a,n);break;
			default:cout<<"\nKhong co lua chon"<<endl;break;
		}
	}while(lc!=0);
}
