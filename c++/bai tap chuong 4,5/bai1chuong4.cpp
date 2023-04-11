#include <iostream >
#include <math.h>
using namespace std; 
int main ()
 {
 	float  a,b ,c;
 	float p,x1,x2,x ; 
	 cout<<"nhap a:"; cin>>a;
	 cout<<"nhap b:"; cin>>b;
	  cout<<"nhap c:"; cin >> c;
	 
	  p = sqrt(b*b -4*a*c) ;
	  if (a==0 )
 
	 {
	 	
	 	if (b==0)
 	
	 	{
		if(c==0)
	 	
	 		cout<<"pt vo so nghiem"<< endl;
	 	
	 		else  
		 	
	 		cout<<"pt vo nghiem"<<endl;	 }	
	 	
	 
 	    else  
		 	 
 		        x=-c/b;
			    cout<<"pt co nghiem x = "<<x<< endl; }
 	        
 
 	else
	 
	 	 {
			 if (p==0)
 	
	 	 		cout<<" pt co nghiem kep x1=x2= "<< -b/2*a<< endl;
	 	 	
	 	 	else if (p>=0)
			  	
			{
				  x1=(-b+p)/2*a;
			  	  x2=(-b-p)/2*a;	
	 	 		  cout<<"pt co nghiem x1=" <<x1<<endl;
			      cout<<" pt co nghiem x2= "<<x2<< endl; }
	 	 	else 
	 	 	
	 	 	cout<<"pt vo nghiem"<< endl;
	 	 	
 	
  }	
	   
 	return 0; 
 }
