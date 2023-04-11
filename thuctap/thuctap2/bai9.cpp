# include<iostream>
using namespace std;
   
   void timMAX(int A[],int n){
       int Max=A[0]; int vt;
        for(int i=1;i<n;i++){
            if(Max<A[i])
            Max=A[i];
            vt=i;
        }

   cout<<"mang co gia tri lon nhat la "<<Max<<" tai vi tri la "<<vt<<" trong mang "<<endl;
}

   
    
void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}

main(){
   int n ; 
   int A [10];
   
   nhap(A,n);
  timMAX(A,n);
  
}