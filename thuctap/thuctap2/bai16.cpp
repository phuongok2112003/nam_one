# include<iostream>
using namespace std;

void nhap(int A[],int n){ 
   
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"phan tu thu "<<i<<" la "; cin>>A[i]; }
}
   void  xuat(int A[],int nn ){

cout<<"xuat mang "<<endl;
   for(int i=0;i<nn;i++) cout<<"phan tu thu "<<i<<" la "<<A[i]<<endl; 
}
   void Xapxep(int A[],int n ){
for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(A[j]<A[i]){
               int temp=A[i];
               A[i]=A[j];
               A[j]=temp;
           }
       }
   }}
    

 
 void gopmang(int C[],int A[],int B[],int n,int m){

   for(int i=0;i<n;i++){
      C[i]=A[i];
   }
   for(int i=0;i<m;i++){
  C[n+i]=B[i];

   }
  
   Xapxep(C,m+n);
   cout << "\n\n\t\t MANG C SAU KHI TRON 2 MANG A VA B\n";
   xuat(C,m+n);
  
 }


main(){
   int n ,m; 
   int A [10],B[10],C[20];
   cout << "\n\n\t\t MANG A\n";
    cout<<"nhap kich co mang "; cin>>n;
   nhap(A,n);

   //Xapxep(A,n);
 
   cout << "\n\n\t\t MANG B\n";
    cout<<"nhap kich co mang "; cin>>m;
   nhap(B,m);
  

  gopmang(C,A,B,n,m);
  }

