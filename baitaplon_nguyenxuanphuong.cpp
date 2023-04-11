#include <iostream>
#include <iomanip>
#include <string> 
#include<fstream>
using namespace std;

typedef struct

{ string  masp;
string  tensp;
string  donvitinh; 
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
cout<<"\nDon vi tinh :"; getline(cin,(p+i)->donvitinh) ; 
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
cout<<setw(15)<<"Thanh tien"<<setw (15)<<"don vi tinh"<<endl;
 
tinh_thanh_tien(a,n);
for (int i=0;i<n;i++)
{
cout<<setw(10)<<a[i].masp;
cout<<setw(25)<<a[i].tensp;
cout<<setw(15)<<a[i].soluong;
cout<<setw(15)<<a[i].dongia;
cout<<setw(15)<<a[i].thanhtien<<setw(15)<<a[i].donvitinh <<endl;
}
}
 void sapxep(san_pham a[],int &m){
	
	for  (int i=0;i<m;i++) {
 	san_pham  tg ; 
  		for( int k=0;k<=i;k++){
		if(a[i].soluong<a[k].soluong)
		{ 
      tg=a[i];
	  a[i]=a[k];
	  a [k]=tg ;
		}
  		}
		 }
		 inds(a,m); 
} 


void themmathang(san_pham a[], int &n)
{int m; 
cout<<"nhap  so mat hang can them " ;cin>>m ;

for(int i=n;i<n+m;i++)
{ cin.ignore();
cout<<"\n--Nhap san pham thu "<< i+1<<"--"<<endl;
cout<<"Ma san pham:"; getline(cin,a[i].masp);
cout<<"\nTen san pham:";getline(cin,a[i].tensp);
cout<<"\nDon vi tinh :"; getline(cin,a[i].donvitinh); 
cout<<"\nSo luong san pham:";cin>>a[i].soluong;
cout<<"\nDon gia san pham:";cin>>a[i].dongia;

 
}
n=m+n; 
sapxep(a,n) ;
}



  int xoamangtai(san_pham a[],int &n,int  vitrixoa) { 
for(int i=vitrixoa;i<n;i++){	
 

 	a[i]=a[i+1];
	 
 
 	
 }n--; 
 
 return n; }
 
 void xoa(san_pham a[],int &n,string dv){
	
	for (int i=0;i<n;) {
		
	if(a[i].donvitinh.compare(dv)==0)
	{
	xoamangtai(a,n,i) ;		}
	else {i++; 
	}
	}
} 
 void inthanhtienmax(san_pham sp[],int &n) {tinh_thanh_tien(sp,n);
	int j=0; int max ; 
	max=sp[0].thanhtien ;
	for (int i=0;i<n;i++){
		if(max<sp[i].thanhtien) 
		max=sp[i].thanhtien; 
		j=i; 
	} cout<<"-----------Mat hang co thanh tien lon nhat la ----------------"<<endl; 

cout<<setw(10)<<"Ma san pham"<<setw(25)<<"Ten san pham";
cout<<setw(15)<<"So luong"<< setw(15)<<"Don gia";
cout<<setw(15)<<"Thanh tien"<<setw(15)<<"don vi tinh"<<endl;

cout<<setw(10)<<sp[j].masp;
cout<<setw(25)<<sp[j].tensp;
cout<<setw(15)<<sp[j].soluong;
cout<<setw(15)<<sp[j].dongia;
cout<<setw(15)<<sp[j].thanhtien<<setw(15)<<sp[j].donvitinh<<endl;
}
void luudanhsach(int &n ,san_pham a[])
{tinh_thanh_tien(a,n);
ofstream f("product.dat");

if(!f)
{ cout<<"Khong the tao duoc tep tin"<<endl;
exit(1);
}
cout<<"\t\t\t--DANH SACH SAN PHAM--"<<endl;

	for(int i=0;i<n;i++)
	{
	f<<a[i].masp;f<<','; 
	f<<a[i].tensp;f<<','; 
	f<<a[i].soluong;f<<','; 
	f<<a[i].dongia;f<<','; 
	f<<a[i].thanhtien<<','<<a[i].donvitinh<<endl;
	}
	cout<<"-------------Da ghi vao tep tin-----------" ;
f.close();
}

void docvain(san_pham doc[],int &n ) {  string tieude;


  char dau; 
ifstream f1("product.dat");
if(!f1)   
{ cout << "Khong the doc duoc tep tin "<<endl;
exit(1);

}
 	
	cout<<"\n\nDanh sach doc tu tep 'product.dat'\n "<<endl;
	getline(f1,tieude) ; 
	for(int i=0;i<n;i++) {
		getline(f1,doc[i].masp,',') ;
		getline(f1,doc[i].tensp,',') ;
	    f1>>doc[i].soluong;f1>>dau; 
		f1>>doc[i].dongia;f1>>dau ;
		f1>>doc[i].thanhtien ;f1>>dau; 
		getline(f1,doc[i].donvitinh);
		
	 
		
	}
 cout<<tieude<<endl; 
cout<<setw(10)<<"Ma san pham"<<setw(25)<<"Ten san pham";
cout<<setw(15)<<"So luong"<<setw(15)<<"Don gia";
cout<<setw(15)<<"Thanh tien"<<setw (15)<<"don vi tinh"<<endl;


for (int i=0;i<n;i++)
{
cout<<setw(10)<<doc[i].masp<<setw(25)<<doc[i].tensp<<setw(15)<<doc[i].soluong<<setw(15)<<doc[i].dongia<<setw(15)<<doc[i].thanhtien<<setw(15)<<doc[i].donvitinh <<endl;	
}
f1.close ();

}
int main()
{ 
int n;
  int  kt ;

	
				san_pham sp[200];	
               san_pham doc[200]; 
	      
		   
	
do	{cout<<"\n\t\t--MENU--\n";
    cout<<"1.Xay dung menu thuc hien cac chuc nang sau "<<endl; 
	cout<<"2.Nhap thong tin san pham tu bam phim "<<endl;
	cout<<"3.Tinh cot thanh tien voi thanh tien=don gia *so luong "<<endl; 
	cout<<"4.In thong tin cac  san pham  "<<endl;
	cout<< "5.Sap xep cac mat hang theo thu tu tang dan ve so luong va in danh sach sau khi sap xep "<<endl; 
    cout<< "6.In thong tin cac san pham co thanh tien lon nhat "<<endl; 
    cout<< "7.Them vao danh sach mat hang moi va in sao cho van duoc sap xep "<<endl;  
    cout<< "8.Xoa cac mat hang co don vi tinh la dv  "<<endl; 
    cout<< "9.Luu danh sach cac mat hang ra tep product.dat"<<endl; 
    cout<< "10.Doc danh sach tu tep product.dat va in thong tin ra man hinh "<<endl;
	cout<<"0.Ket thuc"<<endl; 
cout<<"nhap chuong trinh can chon ";cin >>kt; 
		

switch (kt) 
    {

			case 0:break;
			case 1: {cout<<"\n\t\t--MENU--\n";
    cout<<"1.Xay dung menu thuc hien cac chuc nang sau "<<endl; 
	cout<<"2.Nhap thong tin san pham tu bam phim "<<endl;
	cout<<"3.Tinh cot thanh tien voi thanh tien=don gia *so luong "<<endl; 
	cout<<"4.In thong tin cac  san pham  "<<endl;
	cout<< "5.Sap xep cac mat hang theo thu tu tang dan ve so luong va in danh sach sau khi sap xep "<<endl; 
    cout<< "6.In thong tin cac san pham co thanh tien lon nhat "<<endl; 
    cout<< "7.Them vao danh sach mat hang moi va in sao cho van duoc sap xep "<<endl;  
    cout<< "8.Xoa cac mat hang co don vi tinh la dv  "<<endl; 
    cout<< "9.Luu danh sach cac mat hang ra tep product.dat"<<endl; 
    cout<< "10.Doc danh sach tu tep product.dat va in thong tin ra man hinh "<<endl;
	cout<<"0.Ket thuc"<<endl; 
				break;
			}
			case 2:
			{
				cout<<"\nNhap so luong san pham: ";cin>>n;
			
				nhapds(sp,n);
				break;
			}
			case 3:{tinh_thanh_tien;
			cout<<"----------------Da tinh tien xong ---------------"<<endl; 
				break;
			}
			case 4:inds(sp,n);break;
			
			case 5:
			{
				sapxep(sp,n); 
				break;
			}
			case 6:
			{
				inthanhtienmax(sp,n);
				break;
			}
		  case 7:themmathang(sp,n) ;break;
			
			case 8:{ 
			string  dv;cin.ignore();
 					cout<<"\ndon vi tinh ma bn muon xoa la : "; getline(cin,dv);  
					xoa(sp,n,dv); 
				break;
			}
			case 9: luudanhsach  (n,sp); break; 
			case 10: 	 docvain(doc,n); break; 
			
			
				default:cout<<"\nKhong co lua chon nao phu hop "<<endl;break;
			
			
		}
	}while(kt!=0);
    	  
		
}





