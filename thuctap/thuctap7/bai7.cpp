#include <iostream>
#include <iomanip>
#include <string.h> 

using namespace std;

typedef struct

{ char  mahs[10];
char tenhs[20];
char hocluc[10];
float  li;
float  hoa;
float  toan;
 
float  diemtb;
} diem;
float tinhtrungbinh(int toan,int li,int hoa){
    return (toan+li+hoa)/3;
}
void xeploaihocluc(diem a[],int n)
{ for(int i=0;i<n;i++){
	if(a[i].diemtb>=9)strcpy(a[i].hocluc,"xuat sac");
	else if(a[i].diemtb>=8&&a[i].diemtb<9)strcpy(a[i].hocluc,"gioi");
	else if (a[i].diemtb>=6.5&&a[i].diemtb<8)strcpy(a[i].hocluc,"kha");
	else if (a[i].diemtb>=5&&a[i].diemtb<6.5)strcpy(a[i].hocluc,"trung binh");
	else if (a[i].diemtb<5)strcpy(a[i].hocluc,"yeu");
}
}

void nhapds(diem p[], int &m)
{ for(int i=0;i<m;i++)
{ cin.ignore();
cout<<"\n--Nhap hoc sinh thu "<< i+1<<"--"<<endl;
cout<<"Ma hoc sinh:"; cin.getline(p[i].mahs,10);
cout<<"\nTen hoc sinh:";cin.getline(p[i].tenhs,20);

cout<<"\nDiem li :";cin>>p[i].li;
cout<<"\nSDiem hoa :";cin>>p[i].hoa;
cout<<"\nDiem toan :";cin>>p[i].toan;
p[i].diemtb=tinhtrungbinh(p[i].toan,p[i].li,p[i].hoa);





}
}
void inds(diem a[], int &n)

{cout<<"\n\n--- DANH SACH HOC SINH ---"<<endl;
 xeploaihocluc(a,n);
 cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"|"<<setw(10)<<"Ma hoc sinh "<<"|"<<setw(25)<<"Ten hoc sinh ";
cout<<"|"<<setw(15)<<"Diem toan";
cout<<"|"<<setw(15)<<"Diem hoa "<<"|"<<setw(15)<<"Diem li"<<"|"<<setw(15)<<"Diem TB"<<"|"<<setw(15) <<"hoc luc"<<"|"<<endl;

cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;

for (int i=0;i<n;i++)

{

	
cout<<"|"<<setw(12)<<a[i].mahs;
cout<<"|"<<setw(25)<<a[i].tenhs;
cout<<"|"<<setw(15)<<a[i].toan;
cout<<"|"<<setw(15)<<a[i].hoa;
cout<<"|"<<setw(15)<<a[i].li<<"|"<<setw(15)<<a[i].diemtb<<"|"<<setw(15)<<a[i].hocluc<<"|"<<endl;
cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;

}
}
 void hocsinhgioi(diem a[], int &n)

{cout<<"\n\n--- DANH SACH HOC SINH GIOI XUAT SAC ---"<<endl;
 xeploaihocluc(a,n);
cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"|"<<setw(10)<<"Ma hoc sinh "<<"|"<<setw(25)<<"Ten hoc sinh ";
cout<<"|"<<setw(15)<<"Diem toan";
cout<<"|"<<setw(15)<<"Diem hoa "<<"|"<<setw(15)<<"Diem li"<<"|"<<setw(15)<<"Diem TB"<<"|"<<setw(15) <<"hoc luc"<<"|"<<endl;

 cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;

for (int i=0;i<n;i++)

{
	if(strcmp(a[i].hocluc,"gioi")==0||strcmp(a[i].hocluc,"xuat sac")==0){
	
cout<<"|"<<setw(12)<<a[i].mahs;
cout<<"|"<<setw(25)<<a[i].tenhs;
cout<<"|"<<setw(15)<<a[i].toan;
cout<<"|"<<setw(15)<<a[i].hoa;
cout<<"|"<<setw(15)<<a[i].li<<"|"<<setw(15)<<a[i].diemtb<<"|"<<setw(15)<<a[i].hocluc<<"|"<<endl;
 cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
}
}
}
int main(){
	
int n;
cout<<"Nhap so luong hoc sinh "; cin>>n;
diem hs[10];
nhapds(hs,n);
inds(hs,n);
hocsinhgioi(hs,n);
}
