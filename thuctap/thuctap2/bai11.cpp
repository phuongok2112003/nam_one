# include<iostream>
using namespace std;
 
  
   
    
void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}
int Tinh(int A[], int &n){
    int tong=0;
 for(int i=0;i<n;i++){
   tong+=A[i];
 }
 cout<<"tong cua cac phan tu trong mang la "<<tong<<endl;
 cout<<"trung binh cong cua cac phan tu trong mang la "<<(float)tong/n<<endl;
  }
main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
  Tinh(A, n);
  
  
}
