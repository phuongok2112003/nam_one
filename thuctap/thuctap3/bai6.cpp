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
 void ktsole(int a[][10],int m,int n){
int dem=0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          if(a[i][j]%2!=0){
                dem++;
                }
      
      }
   }
   if(dem==n*m)
   cout<<"trong mang hoan toan la so le  "<<endl;
   else cout<<"trong mang khong hoan toan la so le "<<endl;
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
   
  ktsole(a,m,n);
  

}
