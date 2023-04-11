
#include <iostream>
#include<string.h>
using namespace std;

 typedef struct  {
  char ten [20];
  char id [10];
 int tuoi;

  float diemKi1;
  float diemKi2;
  
} thongKe;
float* trungbinhtongket(int n,thongKe* a){
 float *tb=new float [n];
 for(int i=0;i<n;i++){
     *(tb+i)=((a+i)->diemKi1+(a+i)->diemKi2)/2;
 }
 
return tb;
}
 void trungbinhcuoinam(int n,thongKe* a){

float tong;
for(int i=0;i<n;i++){
    tong+=*(trungbinhtongket(n,a)+i);
}

cout<<*(trungbinhtongket(n,a));
 cout<<"Trung binh tong ket cua ca lop la "<<tong/n<<endl;
 }
 void hocsinhcao(int n,thongKe* a){
     
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){

        
   if(*(trungbinhtongket(n,a)+i)<*(trungbinhtongket(n,a)+j))
   swap(*(a+i),*(a+j));

     } }
     cout<<"\nHoc sinh co diem trung binh cao nhat lop la "<<(a)->ten;
 }
 void hocsinhtienbo(int n,thongKe* a){
    cout<<"\nNhung hoc sinh co ket qua tien bo la ";
    for(int i=0;i<n;i++){
        if((a+i)->diemKi1<(a+i)->diemKi2)
            cout<<(a+i)->ten<<" ";
 }
 }
 void nhap(int &n, thongKe *x){
cout<<"nhap so hoc sinh "; cin>>n;

for(int i=0;i<n;i++){
  cin.ignore(); 
 cout<<"Hoc sinh thu "<<i+1<<endl;
 cout<<"ID cua hoc sinh la ";
 cin.getline((x+i)->id,20);
 cout<<"Ten cua hoc sinh do la "; cin.getline((x+i)->ten,10);
   do{
  cout<<"Nhap diem tong ket hoc ki I "; 
  cin>>(x+i)->diemKi1;
   }while((x+i)->diemKi1>10||(x+i)->diemKi1<0);
  
     
   
      do{
    cout<<"Nhap diem tong ket hoc ki II "; 
     cin>>(x+i)->diemKi2;
   }while((x+i)->diemKi2>10||(x+i)->diemKi2<0);
    
 }
 }
int main() {
    int n;
    
 thongKe*x=new thongKe[n] ;
 nhap(n,x);
 trungbinhcuoinam(n,x);
 hocsinhcao(n,x);
 hocsinhtienbo(n,x);
 delete[] x;
    return 0;
}