# include<iostream>
using namespace std;
   void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}
void Tongsole(int A[],int n){
    int tong=0;
    for(int i=0;i<n;i++)
        if(A[i]%2!=0) tong+=A[i];
        cout<<" tong cac so le trong mang la "<<tong;
}
   
   
    


main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
   Tongsole(A,n);
  
}
