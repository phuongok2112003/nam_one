# include<iostream>
using namespace std;
 
  
   
    
void nhap(int A[],int &n){ 
    cout<<"nhap n "; cin>>n;
cout<<"nhap mang nao " <<endl;
   for(int i=0;i<n;i++){
   	cout<<"A["<<i<<"] = "; cin>>A[i]; }
}

 void Songuyento(int A[],int n){

cout<<"so nguyen to trong mang la ";
for(int i=0;i<n;){
int j=1 ,tong=0;
for(;j<=A[i]/2;j++){
 if(A[i]%j==0)
 tong++;

 }

 if(tong==1||A[i]==1) cout<<A[i]<<"  ";
 i++;
}

}
main(){
   int n ; 
   int A [n];
   
   nhap(A,n);
  Songuyento(A,n);
  
   
}
