#include<iostream>
using namespace std;
 int songuyento (int n ){
   int i,j=2 ; 
   
   for (i=2;i<n;i++){ 
   int kt=1; 
   	while (j<=i/2 )
	   {
	   	if (i%j==0){
		   kt=0;
		   break;}
		   j++; 
	   } 
	   
	   if(kt==1){
	   cout<<i<<"  "; }
   } 
 
 }		 
			
main(){
	int n; 
	cout<<"nhap n "; cin>>n; 

	  songuyento(n);

} 
