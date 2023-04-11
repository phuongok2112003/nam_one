#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

typedef struct

{ string  masp;
string  tensp;

unsigned long int soluong;
unsigned long int dongia;
unsigned long int thanhtien; 
} san_pham;


void nhapds(san_pham *p, int &m)
{ for(int i=0;i<m;i++)
{ cin.ignore();
cout<<"\n--Nhap san pham thu "<< i+1<<"--"<<endl;
cout<<"Ma san pham:"; getline(cin,(p+i)->masp);
cout<<"\nTen san pham:";getline(cin,(p+i)->tensp);

cout<<"\nSo luong san pham:";cin>>(p+i)->soluong;
cout<<"\nDon gia san pham:";cin>>(p+i)->dongia;
 


}
}

 void tinh_thanh_tien(san_pham a[],int &m)
{
for(int i=0;i<m;i++) 
   a[i].thanhtien=a[i].soluong*a[i].dongia;
   
}
void inds(san_pham a[], int &n)
{cout<<"\n\n--- DANH SACH SAN PHAM ---"<<endl;
cout<<setw(10)<<"Ma san pham"<<setw(25)<<"Ten san pham";
cout<<setw(15)<<"So luong"<<setw(15)<<"Don gia";
cout<<setw(15)<<"Thanh tien"<<endl;
 
tinh_thanh_tien(a,n);
for (int i=0;i<n;i++)
{
cout<<setw(10)<<a[i].masp;
cout<<setw(25)<<a[i].tensp;
cout<<setw(15)<<a[i].soluong;
cout<<setw(15)<<a[i].dongia;
cout<<setw(15)<<a[i].thanhtien<<endl;
}
}



 void indanhsachyc(san_pham sp[],int &n) {tinh_thanh_tien(sp,n);
tinh_thanh_tien(sp,n);
	
 cout<<"\n-----------Mat hang co so luong duoi 50 la  ----------------"<<endl; 

cout<<setw(10)<<"Ma san pham"<<setw(25)<<"Ten san pham";
cout<<setw(15)<<"So luong"<< setw(15)<<"Don gia";
cout<<setw(15)<<"Thanh tien"<<endl;
for (int j=0;j<n;j++){
    if(sp[j].soluong<50){


cout<<setw(10)<<sp[j].masp;
cout<<setw(25)<<sp[j].tensp;
cout<<setw(15)<<sp[j].soluong;
cout<<setw(15)<<sp[j].dongia;
cout<<setw(15)<<sp[j].thanhtien<<endl;
}    }
}

int main()
{ 
int n;
san_pham sp[200];	
cout<<"\nNhap so luong san pham: ";cin>>n;			
nhapds(sp,n);
inds(sp,n);
indanhsachyc(sp,n);		
			
	
		
}





