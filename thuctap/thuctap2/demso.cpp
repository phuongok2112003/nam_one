# include<iostream>
using namespace std;
   void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}
void Demso(int A[], int &n){
      int demsoam=0 ,demsoduong=0,demsokhong=0;
      for(int i=0;i<n;i++)
        {

         if(A[i]>0) demsoduong++;
         else if( A[i]<0) demsoam++;
            else demsokhong++;
            } 
          cout<<" trong mang co tat ca " <<demsoduong<<" so duong"<<endl;
          cout<<" trong mang co tat ca "<<demsoam<<" so am"<<endl;
          cout<<" trong mang co tat ca "<<demsokhong<<" so 0 "<<endl; 
   }
   
    


main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
   Demso(A,n);
  
}
