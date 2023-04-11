#include <iostream>
#include <math.h>
using namespace std;

			
main(){
	float a,b,c,x,x1,x2,p; 
	cout<<"nhap a: ";
	cin>>a;
	 cout<<"nhap b : ";
	cin>>b;  
	cout<<"nhap c : ";
	cin>>c; 
	int kt; 
    cout<<"1. giai bpt ax+b>c"<<endl ;
	cout<<"2. giai pt ax^2+bx+c=0 "<<endl ;
    cout<<"3. kiem tra co phai tam giac khong  "<<endl ;
				
	

	cout<<"nhap lua chon " ; cin>>kt; 
	
	switch (kt){
	case 1	: 
 if (a==0&&b==0||a==0&&b<0) cout<<"bat pt vo nghiem" <<endl;
    if (a==0&&b>0) cout<<" bat pt vo so nghiem"<< endl;
	 
    if (a>0 ) 
     cout<<"nghiem cua bpt la x >" <<(c-b)/a <<endl;
     else if (a <0)  
      cout << "nghiem cua  bpt la x <"<<(c-b)/a<< endl ; break;
	case 2:
	
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
	 	 	
	 	 	else if (p>0)
			  	
			{
				  x1=(-b+p)/(2*a);
			  	  x2=(-b-p)/(2*a);	
	 	 		  cout<<"pt co nghiem x1= " <<x1<<endl;
			      cout<<"pt co nghiem x2= "<<x2<< endl; }
	 	 	else 
	 	 	
	 	 	cout<<"pt vo nghiem"<< endl;
	 	 	
 	
  }	break; 
	case 3 : 
	if ((a+b > c) && (b+c > a) && (a+c > b))
{ cout<<"Thoa man la 3 canh tam giac"<<endl;
if ((a==b) && (b==c))
cout<<"Do la tam giac deu"<<endl;
else
if ((a==b)||(b==c)||(c==a))
cout<<"Do la tam giac can"<<endl;
else
if ((a*a + b*b == c*c)||(b*b+c*c==a*a)
||(a*a + c*c == b*b))
cout<<"Do la tam giac vuong"<<endl;
else
cout<<"Do la tam giac thuong"<<endl;
}
else
cout<<"Khong la 3 canh tam giac"<<endl;
	break; 
	 
	 
		default:cout<<"xin loi ban da vao truong hop ngoa le  " <<endl; break; 
	}
}  

