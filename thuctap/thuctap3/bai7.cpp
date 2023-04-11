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
 
 int  kt (int n){
int ktso=0;
int x;
x= int (sqrt(n));
if(x*x==n)ktso=1;

 return ktso;
 }
 void sochinhphuong(int a[][10],int m,int n){

cout<<"so chinh phuong trong mang la ";
for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          if(kt(a[i][j])==1){
                
                cout<<a[i][j]<<"\t";
                }
      
      }
  
  }


 }
  int vitriam(int a[][10],int m,int n){
     
for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          if(a[i][j]<0){
                
                cout<<"\nvi tri phan tu am dau tien trong mang la o hang "<<i<<" cot "<<j<<" co gia tri la "<<a[i][j];
             return 0;
                }
               
      
      }
  
   }
cout<<"\ntrong mang khong co so am"<<endl;

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
   

  sochinhphuong(a,m,n);
   vitriam (a,m,n);

}
