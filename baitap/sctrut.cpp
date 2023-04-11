#include<iostream>
#include <string> 
#include<iomanip>
using namespace std;
  struct time { int ngay ;

int thang;
int nam;
} ;

typedef struct

{ string nhanhieu;
int trongluong;
  struct time hsd;
} san_pham;
void nhap(san_pham sp[], int &n){
    cout<<"nhap so luong "; cin>>n;
    
    for(int i=0;i<n;i++)
{  cin.ignore(); 
cout<<"nhap nhan hieu san pham "; getline(cin,sp[i].nhanhieu);

cout<<"han su dung la "<<endl;
    do{


    cout<<"ngay ";
    cin>>sp[i].hsd.ngay;}while(sp[i].hsd.ngay>30||sp[i].hsd.ngay<=0);
    
    do{
        cout<<"thang " ;
    cin>>sp[i].hsd.thang;
    
    }while(sp[i].hsd.thang>12||sp[i].hsd.thang<=0);
    do{
        cout<<"nam ";
        cin>>sp[i].hsd.nam;
    }while (sp[i].hsd.nam<0);
    
cout<<"nhap trong luong ";
cin>>sp[i].trongluong;


}

}
void xuat(san_pham sp[], int &n){
    cout<<"    Nhan hieu san pham  "<<setw(10)<<"ngay het han "<<setw(15)<<"thang het han "<<setw(15)<<"nam het han "<<setw(25)<<"trong luong san pham"<<endl;
    for(int i=0;i<n;i++){

   
cout<<setw(16)<<sp[i].nhanhieu<<setw(15)<<sp[i].hsd.ngay<<setw(15)<<sp[i].hsd.thang<<setw(15)<<sp[i].hsd.nam<<setw(23)<<sp[i].trongluong<<endl;
 }
}
 bool check(int i, int s,san_pham sp[]){


int l = sp[i].hsd.ngay + sp[i].hsd.thang * 30 + sp[i].hsd.nam * 365;
return l < s;
 }

void hethan ( san_pham sp[], int &n){
    struct  time x;
cout<<"han su dung la "<<endl;
cout<<"ngay ";
cin>>x.ngay;
 cout<<"thang " ;
cin>>x.thang;
 cout<<"nam ";cin>>x.nam;
 int s =x.ngay+x.thang*30+x.nam*365;
 int dem=0;
 for(int i=0;i<n;i++){
     if(check(i,s,sp))
   

     dem++;


 }
cout<<"so luong hop sua het han la "<<dem<<endl;

}

void trongluonglon(san_pham sp[], int &n){
    int max=sp[0].trongluong;
for(int i=1;i<n;i++){
    if(sp[i].trongluong>max)
    max=sp[i].trongluong;
    


 }
cout<<"hop sua co can nang nhat la "<<max<<endl;
    
}

int main()
{
   san_pham sp[10];
   int n;
   nhap(sp,n);
 xuat(sp,n);
 hethan(sp,n);
 trongluonglon(sp,n);
    return 0;
}
