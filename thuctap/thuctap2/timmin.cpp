# include<iostream>
using namespace std;
   
   void timMin(int A[],int n){
       int Min=A[0]; int vt;
        for(int i=1;i<n;i++){
            if(Min>A[i])
            Min=A[i];
            vt=i;
        }

   cout<<"mang co gia tri nho nhat la "<<Min<<" tai vi tri la "<<vt<<" trong mang "<<endl;
}

   
    
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
  timMin(A,n);
  
}
