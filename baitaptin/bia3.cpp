#include <iostream>
using namespace std; 
int  main()
{
 int i=1, n,j,s ;
 cout<<"nhap n:";
 cin >>n ; 
 cout<<"cac so hoan hao tu 1 den "<<n <<" la :";
 for  (;i <= n;) {
 	  s=0; 
	 	j=1;
		 
		 while (j<=i/2) {
		 	if(i%j ==0 ) {
		 	s=s+j ; }
			 j ++; 
			 } 
			 if(s==i) {
 				
 			
			 cout<<i<<"  " ;}
			 i++;
 	}

 }

 


 
