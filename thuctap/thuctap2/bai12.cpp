# include<iostream>
using namespace std;
   void  xuat(int A[],int n ){
cout<<"xuat mang "<<endl;
   for(int i=0;i<n;i++) cout<<"A["<<i<<"] = "<<A[i]<<endl; 
}
   void Xapxep(int A[],int n ){
for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(A[j]>A[i]){
               int temp=A[i];
               A[i]=A[j];
               A[j]=temp;
           }
       }
   }}
    
void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}

main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
   xuat(A,n);
   Xapxep(A,n);
   cout<<"sau khi sap xep ta duoc "<<endl;
   xuat(A,n);
  
}
