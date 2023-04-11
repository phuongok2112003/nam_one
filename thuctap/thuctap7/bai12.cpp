
#include <iostream>
#include<string.h>
using namespace std;

 typedef struct  {
  float x;
  float y;
  
} toaDo;
void toadodoixung(int n,toaDo*a){
    cout<<"DOI XUNG QUA TRUC TUNG \n";
for(int i=0;i<n;i++){
    cout<<"("<<(a+i)->x<<","<<(a+i)->y<<") doi xung qua truc tung la "<<"("<<-(a+i)->x<<","<<(a+i)->y<<")"<<endl;
}
cout<<"DOI XUNG QUA TRUC HOANH \n";
for(int i=0;i<n;i++){
    cout<<"("<<(a+i)->x<<","<<(a+i)->y<<") doi xung qua truc hoanh la "<<"("<<(a+i)->x<<","<<-(a+i)->y<<")"<<endl;
}
cout<<"DOI XUNG TAM \n";
for(int i=0;i<n;i++){
    cout<<"("<<(a+i)->x<<","<<(a+i)->y<<") doi xung qua tam O la "<<"("<<-(a+i)->x<<","<<-(a+i)->y<<")"<<endl;
}
}

 void tinhtoan(int n,toaDo*a){
    cout<<"Tong cua hai diem  \n";
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++)

    cout<<"("<<(a+i)->x<<","<<(a+i)->y<<") va "<<"("<<(a+j)->x<<","<<(a+j)->y <<") la "<<"("<<(a+j)->x+(a+i)->x<<","<<(a+j)->y+(a+i)->y<<")"<<endl;
}
cout<<"Hieu cua hai diem la \n";

     for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++)

    cout<<"("<<(a+i)->x<<","<<(a+i)->y<<") va "<<"("<<(a+j)->x<<","<<(a+j)->y <<") la "<<"("<<(a+j)->x-(a+i)->x<<","<<(a+j)->y-(a+i)->y<<")"<<endl;
}

cout<<"Tich cua hai diem la \n";

   for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++)

    cout<<"("<<(a+i)->x<<","<<(a+i)->y<<") va "<<"("<<(a+j)->x<<","<<(a+j)->y <<") la "<<"("<<(a+j)->x*(a+i)->x<<","<<(a+j)->y*(a+i)->y<<")"<<endl;
}

}

int main() {
    int n;
    cout<<"NHap n "; cin>>n;
toaDo*X=new toaDo[n] ;
 for(int i=0;i<n;i++){
  cout<<"Nhap toa do cua x "; cin>>(X+i)->x;
  cout<<"Nhap toa do cua y "; cin>>(X+i)->y;    
 }
 toadodoixung(n,X);
 tinhtoan(n,X);
 delete[] X;
    return 0;
}