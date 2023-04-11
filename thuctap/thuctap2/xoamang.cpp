# include<iostream>
using namespace std;
   void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}
 void  xuat(int A[],int n ){
cout<<"xuat mang "<<endl;
   for(int i=0;i<n;i++) cout<<"A["<<i<<"] = "<<A[i]<<endl; }
void Xoamang(int A[], int n){ int vt;
      cout<<"nhap vi tri can xoa la "; cin>>vt;
      for(;vt<n;vt++){

     
        A[vt]=A[vt+1];
       } n--; 

        
     xuat(A,n);
   }
   
    


main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
   Xoamang(A,n);
  
}
