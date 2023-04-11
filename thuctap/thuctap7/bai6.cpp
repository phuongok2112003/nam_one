#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

typedef struct

{ char  manv[10];
char  tennv[20];

 int luong;
 int phucap;
 int tongluong; 
} nhan_vien;

int tinhphucap(int luong){
    return 25*luong/100;
}
int tongluong(int luong,int phucap){
    return luong+phucap;
}
void nhapds(nhan_vien p[], int &m)
{ for(int i=0;i<m;i++)
{ cin.ignore();
cout<<"\n--Nhap nhan vien thu "<< i+1<<"--"<<endl;
cout<<"Ma nhan vien:"; cin.getline(p[i].manv,10);
cout<<"\nTen nhan vien:";cin.getline(p[i].tennv,20);

cout<<"\nSo luong nhan vien:";cin>>p[i].luong;
p[i].phucap=tinhphucap(p[i].luong);
p[i].tongluong=tongluong(p[i].luong,(p[i].phucap));


}
}


void inds(nhan_vien a[], int &n)
{cout<<"\n\n--- DANH SACH NHAN VIEN ---"<<endl;
cout<<setw(10)<<"Ma san pham"<<setw(25)<<"Ten nhan vien";
cout<<setw(15)<<"So luong";
cout<<setw(15)<<"Phu cap "<<setw(15)<<"Tong luong"<<endl;
 

for (int i=0;i<n;i++)
{
cout<<setw(10)<<a[i].manv;
cout<<setw(25)<<a[i].tennv;
cout<<setw(15)<<a[i].luong;
cout<<setw(15)<<a[i].phucap;
cout<<setw(15)<<a[i].tongluong<<endl;
}
}


void intheoyc(nhan_vien a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++)
        if(a[i].tongluong<a[j].tongluong)
        swap(a[i],a[j]);
    }
    inds(a,n);
}
 

int main()
{ 
int n;
nhan_vien nv[200];	
cout<<"\nNhap so luong nhan vien: ";cin>>n;			
nhapds(nv,n);
inds(nv,n);
cout<<"in theo tong luong giam dan "<<endl;
intheoyc(nv,n);
			
	
		
}





