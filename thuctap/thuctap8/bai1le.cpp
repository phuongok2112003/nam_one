#include <iostream>
#include <iomanip>


using namespace std;

 struct  Cau_Thu

{ char  macauthu[10];
char tencauthu[20];

int tuoi;
int sohuychuong;
int thuong;
 

};

typedef   Cau_Thu cau_Thu;
int tinhthuong(int n){
    if (n>5) return 500000;
    else if (n>3&&n<=5) return 300000;
    else if (n>2&&n<=3) return 200000;
    
}
void nhapds(cau_Thu p[], int &m)
{ for(int i=0;i<m;i++)
{ cin.ignore();
cout<<"\n--Nhap cau thu thu "<< i+1<<"--"<<endl;
cout<<"Ma cau thu:"; cin.getline(p[i].macauthu,10);
cout<<"\nTen cau thu:";cin.getline(p[i].tencauthu,20);

cout<<"\nTuoi :";cin>>p[i].tuoi;
cout<<"\nSo huy chuong :";cin>>p[i].sohuychuong;
p[i].thuong=tinhthuong(p[i].sohuychuong);






}
}

void inds(cau_Thu a[], int &n)

{cout<<"\n--- DANH SACH CAU THU ---"<<endl;

 cout<<"---------------------------------------------------------------------------------------"<<endl;
cout<<"|"<<setw(11)<<" Ma cau thu "<<"|"<<setw(26)<<"Ten cau thu ";
cout<<"|"<<setw(14)<<"Tuoi";
cout<<"|"<<setw(15)<<"So huy chuong "<<"|"<<setw(15) <<"Thuong"<<"|"<<endl;

 cout<<"---------------------------------------------------------------------------------------"<<endl;

for (int i=0;i<n;i++)

{

	
cout<<"|"<<setw(12)<<a[i].macauthu;
cout<<"|"<<setw(25)<<a[i].tencauthu;
cout<<"|"<<setw(15)<<a[i].tuoi;
cout<<"|"<<setw(15)<<a[i].sohuychuong;
cout<<"|"<<setw(15)<<a[i].thuong<<"|"<<endl;
 cout<<"---------------------------------------------------------------------------------------"<<endl;

}
}
 void xapsep(cau_Thu a[], int &n)

{cout<<"\n\n-------------------------Danh sach sau khi sap xep la ----------------------"<<endl;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i].tuoi<a[j].tuoi)
        swap(a[i],a[j]);
    }
}
inds(a,n);
}

int main(){
	
int n;
cout<<"Nhap so luong cau thu "; cin>>n;
  cau_Thu ct[10];
nhapds(ct,n);
inds(ct,n);
xapsep(ct,n);
}
