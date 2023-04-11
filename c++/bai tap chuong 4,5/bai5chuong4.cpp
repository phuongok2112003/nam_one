#include <iostream>
using namespace std;
int main ()
 {
 	float  a,s ; 
	 cout<<"nhap  chi so dien tieu thu la : " ;  cin >>a;
	 s=0; 
	 if (a<=100 ) 
  		{
		  	s=a*500 ;
		  	cout <<"so tien can dong la :" <<s ;
			  cout<<" VND" <<endl ; 
		  }
	   else if (a>0)
	   {
   		s=(a-100)*800+100*500 ;
   		cout <<"so tien can dong la :" << s<<" dong"<<endl ; 
   	} 
 	return 0; 
 }
