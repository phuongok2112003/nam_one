#include <iostream>
# include <math.h> 
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
 void tong(int a[][10],int m,int n){

int t=0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
      t+=a[i][j];
      }
   }
   cout<<"tong ta tim duoc la "<<t;
 }

int main() {
  //  int m,n;
  //  cout<<"nhap so hang la "; cin>>n;
  //  cout<<"nhap so cot la "; cin>>m;
  //  int a[10][10];
   
  //  cout<<"nhap mang "<<endl;
  //  nhap(a,m,n);
  //  cout<<"xuat mang "<<endl;
  //  xuat (a,m,n);
   
  // tong(a,m,n);
  int n=5;
  cout<<int (sqrt(n));

}
