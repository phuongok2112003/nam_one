#include <iostream>
using namespace std;
 void nhap(int a[][10] ,int m,int n){
for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   {
       cout<<"a["<<i<<"]["<<j<<"]= "; cin>>a[i][j];

   }

 }
  void xuat (int a[][10],int m,int n){
     for(int i=0;i<n;i++){

 
   for(int j=0;j<m;j++)
   {
       cout<<a[i][j]<<"   ";
       
   } 
   cout<<endl; }
 }
 void tich(int a[][10],int b[][10] , int m,int n,int c ){

int C[10][10]={};
    for (int i = 0; i <n ; i++) {
      for (int j = 0; j < c; j++) {
       
         for(int k=0;k<m;k++)
                C[i][j]+=a[i][k]*b[k][j];
                }
      
      }
      xuat(C,c,n);
   }
  
int main() {
   int m,n,c;
   cout<<"nhap so hang ma tran A  la "; cin>>n;
   cout<<"nhap so cot ma tran A  la "; cin>>m;
   cout<<"hang ma tran B la "<<m<<endl;
   cout<<"nhap so cot  ma tran B  la "; cin>>c;
   int a[10][10];
   int b[10][10];
   int C[10][10];
   cout<<"nhap mang A "<<endl;
   nhap(a,m,n);
    cout<<"nhap mang b "<<endl;
   nhap(b,c,m);
   cout<<"xuat mang A "<<endl;
   xuat (a,m,n);
   cout<<"xuat mang B "<<endl;
   xuat (b,c,m);
   cout<<"tich hai  ma tran la "<<endl;
  tich(a,b,m,n,c);
  

}
