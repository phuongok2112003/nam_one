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
 void trungbinhcongsole(int a[][10],int m,int n){

int t=0;int dem=0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          if(a[i][j]%2!=0){
                t+=a[i][j]; 
                dem++;
                }
      
      }
   }
   cout<<"trung binh cong cac so le la  "<<(float)t/dem<<endl;
 }
 int  kt (int n){
int ktso=0;
if(n==1)ktso=1;
for(int i=1;i<=n/2;i++){
    if(n%i==0)
    ktso++;
}
 return ktso;
 }
 void songuyento(int a[][10],int m,int n){

int dem=0;
for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          if(kt(a[i][j])==1){
                
                dem++;
                }
      
      }
   }

cout<<"trong mang co tat ca "<<dem<<" so nguyen to "<<endl;
 }
int main() {
   int m,n;
   cout<<"nhap so hang la "; cin>>n;
   cout<<"nhap so cot la "; cin>>m;
   int a[10][10];
   
   cout<<"nhap mang "<<endl;
   nhap(a,m,n);
   cout<<"xuat mang "<<endl;
   xuat (a,m,n);
   
  trungbinhcongsole(a,m,n);
  songuyento(a,m,n);

}
