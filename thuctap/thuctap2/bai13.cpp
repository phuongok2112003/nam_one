# include<iostream>
using namespace std;
   void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}
 

void Timkiem(int A[], int n){ int x;
      cout<<"nhap so ma ban kiem tim bay lau nay "; cin>>x;
      bool kt=true;
for(int i=0;i<n;i++){

    if(A[i]==x){
    cout<<" vi tri ma ban kiem tim lau nay la vi tri thu  "<<i<<" trong mang" <<endl;
    kt=false;
    }
    
}
     if (kt==true )   
      cout<<"dieu ban luon tim kiem khong co o day "<<endl;
   }
   
    


main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
  Timkiem(A,n);
  
}
