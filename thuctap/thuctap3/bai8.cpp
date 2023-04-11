#include <bits/stdc++.h>
//<iostream>
//# include <math.h> 
using namespace std;
 void nhap(int a[][100] ,int m,int n){
for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   {
       cout<<"a["<<i<<"]["<<j<<"]= "; cin>>a[i][j];

   }

 }
  void xuat (int a[][100],int m,int n){
     for(int i=0;i<n;i++){

 
   for(int j=0;j<m;j++)
   {
       cout<<setw(5)<<a[i][j];
       
   } 
   cout<<endl; }
 }
 

 void dem(int a[][100],int m,int n){
int dem=0;

for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 100; j++) {
          if(a[i][j]!=0){
                
             dem++;
                }
      
      }
  
  }
 cout<<"trong mang co tat ca "<<dem<<" gia tri trong doan [10,100]"<<endl;

 }
 void sapxep(int a[][100],int m){
    for(int i=0;i<m-1;i++)
      for (int j = i+1; j < m; j++) {
          if(a[0][i]>a[0][j])
                
                swap(a[0][i],a[0][j]);
               
      
      }
  
   cout<<"cac gia tri tren dong dau tien sau khi duoc sap xep la "<<endl;
   for(int j=0;j<m;j++)
 cout<<a[0][j]<<"\t";

 }

 
int main() {
   int m,n;
   cout<<"nhap so hang la "; cin>>n;
   cout<<"nhap so cot la "; cin>>m;
   int a[10][100]={};
   
   cout<<"nhap mang "<<endl;
   nhap(a,m,n);
   cout<<"xuat mang "<<endl;
   xuat (a,m,n);
   

   dem(a,m,n);
   sapxep (a,m);

}
