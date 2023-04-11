#include<iostream>
#include <string> 
#include<iomanip>
using namespace std;
  struct time { int ngay,thang,nam ;

int gio,phut ,giay;

} ;

typedef struct

{ string tenphim;
int giatien;
 struct time ngayxem;
  struct time ngayxuatchieu;

} phim;
void nhap(phim sp[], int &n){
    cout<<"nhap so luong "; cin>>n;
    for(int i=0;i<n;i++)
{ cin.ignore();
    cout<<"phim thu "<<i+1<<endl;
    cout<<"nhap ten phim ";getline(cin,sp[i].tenphim);
 
do{


cout<<"thoi gian xem  la "<<endl;
cout<<"ngay ";
cin>>sp[i].ngayxem.ngay;
}while (sp[i].ngayxem.ngay>30);
do{


 cout<<"thang " ;
cin>>sp[i].ngayxem.thang;}while(sp[i].ngayxem.thang>12||sp[i].ngayxem.thang<=0);
 

 
 cout<<"nam ";cin>>sp[i].ngayxem.nam;
    cout<<"thoi xuat chieu la "<<endl;
do{

cout<<"gio xuat chieu la ";
cin>>sp[i].ngayxuatchieu.gio;
}while (sp[i].ngayxuatchieu.gio>24||sp[i].ngayxuatchieu.gio<0);
 
 do{
     cout<<"phut xuat chieu la  " ;
   cin>>sp[i].ngayxuatchieu.phut;
}while(sp[i].ngayxuatchieu.phut>60||sp[i].ngayxuatchieu.phut<0);
    do{
        cout<<"giay xuat chieu la  ";
         cin>>sp[i].ngayxuatchieu.giay;
    }while(sp[i].ngayxuatchieu.giay>60||sp[i].ngayxuatchieu.giay<0);
cout<<"nhap gai tien ";
cin>>sp[i].giatien;


}

}
void xuat(phim sp[], int &n){
   cout<<"            Ten phim  "<<setw(10)<<"thoi gian xuat chieu "<<setw(15)<<"thoi gian xem "<<setw(15)<<"gia tien "<<endl;
    for(int i=0;i<n;i++){

   
cout<<setw(18)<<sp[i].tenphim<<setw(10)<<sp[i].ngayxuatchieu.gio<<"h "<<sp[i].ngayxuatchieu.phut<<"p "<<sp[i].ngayxuatchieu.giay<<"s "<<setw(13)<<sp[i].ngayxem.ngay<<'/'<<sp[i].ngayxem.thang<<'/'<<sp[i].ngayxem.nam<<setw(15)<<sp[i].giatien<<endl;
 }
}
 
int tong(phim sp[],int n){
int s=0;
    for(int i=0;i<n;i++){
            s+=sp[i].giatien;
    }
    cout<<" tong gia tien ve la "<<s<<endl;
    return 0;  
}
int check1(int i,phim sp[]){


int l = sp[i].ngayxem.ngay + sp[i].ngayxem.thang * 30 + sp[i].ngayxem.nam * 365;
return l ;
 }
 int check2(int i,phim sp[]){


int l = sp[i].ngayxuatchieu.giay+sp[i].ngayxuatchieu.phut*60+sp[i].ngayxuatchieu.gio*3600;
return l ;
 }
void sapxeptheongayxem(phim sp[],int n){

for(int i=0;i<n-1;i++){

    for(int j=i+1;j<n;j++){

  
    if(check1(i,sp)>check1(j,sp))
    swap(sp[i],sp[j]);
}
}
cout<<"sap xep theo ngay xem phim "<<endl;
 xuat(sp,n);
  }
  
  void sapxeptheogiocongchieu(phim sp[],int n){
cout<<"sap xep theo gio cong chieu "<<endl;
for(int i=0;i<n-1;i++){

    for(int j=i+1;j<n;j++){

  
    if(check2(i,sp)>check2(j,sp))
    swap(sp[i],sp[j]);
}
}
 xuat(sp,n);
  }

int main()
{
   phim sp[10];
   int n;
   nhap(sp,n);
 xuat(sp,n);
tong(sp,n);
sapxeptheongayxem(sp,n);
sapxeptheogiocongchieu(sp,n);
    return 0;
}
