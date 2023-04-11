#include<iostream.h>
 int main() 
{ 
  int   n,s=0,j=0,i=0,tg, k; float x; 
  cout<<"nhap n: " ; cin>>n;
  int  a[n];  
	 
	for(i=0;i<n;i++){
		cout<<"a["<<i<<"]=" ;
		cin>>a[i] ;
	} 
	 
	for(i=0;i<n ; i++) {
		if( a[i]<0){
		s=a[i]+s ;
		j=j+1; }
	}
	x= float(s)/ float(j); 
	cout<<"trung binh cac so am  la : " <<  x <<"\n";
		for(i=0;i<n ; i++) {
		if( a[i]%5==0)
		 cout<<"cac phan tu chia het cho 5 la : "<<a[i]<<"\n" ; 
		 
		 }
     for  (i=0;i<n;i++) {
  		for(k=0;k<=i;k++){
		if( a[i]>a[k])
		{
		tg=a[i];
		a[i]=a[k];
		a[k] =tg;
		}
  		}
		 } 
		                
		for(i=0;i<n ; i++)
		cout<<"mang sau khi sap sep lan luot la : " <<a[i]<<"\n";  
		return 0; 
}