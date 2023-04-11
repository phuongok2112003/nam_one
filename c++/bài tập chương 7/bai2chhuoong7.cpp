#include<iostream> 
using namespace std; 
  
  void nhapmang( int n, int a[]){
	for( int i=0;i<n;i++) {
		cout<<"a[" <<i<<"]=" ;
		cin>>a[i] ;
	}
	  
}	
		
		
				
	int main (){
	int n; 
	int *ptr; 
	cout<<"nhap kich co cua mang ";cin>> n; 
	
	 int a[n]; 
	  ptr=a;
	 nhapmang(n,a); 
	
	 for(int i=0;i<n;i++) {
 		cout<<"sau khi duoc tang hai mang co gia tri la: "<<*(ptr+i)+2<<endl; 
 	}
	 
	return 0; 
} 
