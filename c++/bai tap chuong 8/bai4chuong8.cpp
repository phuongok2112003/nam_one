#include <iostream>
using namespace std;
int sohoanhao(  int n,int *a);
 int sohoanhao(  int n, int*a){
   int s,i,j;
    
   for(i=0;i<n;i++){ 
   s=0; j=1;  
   if (a[i]>0) {
  
   for(;j<=a[i]/2;j++){
   	if (a[i]%j==0 )
   	s=s+j; 
   }
   if (s==a[i]){
   
   cout<<a[i] <<"  ";}
   }
 }	
  }
			
main(){
	int n, i; 
	cout<<"nhap kich thuoc mang " ;
		
	cin>>n; 
	int a[n] ;
	for(i=0;i<n;i++) {
		cout<<" a["<<i<<"]=" ;cin>>a[i] ;
	} 
	
	cout<<" cac so hoan hao trong mang la "; 
	sohoanhao(n,a) ;
		
}  

