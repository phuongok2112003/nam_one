
#include <iostream>
#include<string.h>
using namespace std;

 typedef struct  {
  int  x;
  int y;
  
} phanSo;
int ucln(int a, int b){
    while(a != b){
       if(a>b){
          a-= b;
        }else{
           b-= a;
        }}
    return a;}
void rutgon(int n,phanSo*a){
    for(int i=0;i<n;i++){
       cout<<"phan so "<<(a+i)->x<<"/"<<(a+i)->y<<" la "<<(a+i)->x/ucln((a+i)->x,(a+i)->y)<<"/"<<(a+i)->y/ucln((a+i)->x,(a+i)->y)<<endl;
    }
}
void  sosanh(int n,phanSo *a){
  for(int i=0;i<n-1;i++){

  for(int j=i+1;j<n;j++)
     if((a+i)->x*(a+j)->y>(a+j)->x*(a+i)->y)
     cout<<(a+i)->x<<"/"<<(a+i)->y<<" > "<<(a+j)->x<<"/"<<(a+j)->y<<endl;
    else  if((a+i)->x*(a+j)->y<(a+j)->x*(a+i)->y) cout<<(a+i)->x<<"/"<<(a+i)->y<<" < "<<(a+j)->x<<"/"<<(a+j)->y<<endl;
    else cout<<"Hai phan so bang nhau\n";
}
}
int main() {
    int n;
    cout<<"nhap n "; cin>>n;
phanSo*X=new phanSo[n] ;
 for(int i=0;i<n;i++){
  cout<<"Nhap tu so "; cin>>(X+i)->x;
  cout<<"Nhap mau so  "; cin>>(X+i)->y;    
 }
 rutgon(n,X);
 sosanh(n,X);
delete[]X;
    return 0;
}