# include<iostream>
using namespace std;
      
void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}
 void  xuat(int A[],int n ){
cout<<"xuat mang theo thu tu nguoc lai la  ";
   for(int i =n-1;i>=0;i--) cout<<A[i]<<"  ";
}
main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
   xuat(A,n);
  
  
  
}
