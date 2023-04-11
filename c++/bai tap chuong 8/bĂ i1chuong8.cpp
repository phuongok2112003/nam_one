#include <iostream>
using namespace std;
 	int sosanh(int a, int b ){
   int max;
   if(a>=b)
   max=a;
   else if (a<b)
   max=b ;
   
   
 return max; 
 }		
			
main(){
	int a,b ,c,d; 
	cout<<"nhap so a "; 
	cin>>a; 
	cout<<"nhap so b "; cin>>b;
	cout<<"nhap so c "; cin>>c;
	cout<<"nhap so d "; cin>>d;
	  int max1=sosanh (a,b);
	 int max2=sosanh(c,d);
	 cout<<" so lon nhat trong 4 so la "<<sosanh( max1,max2)<< endl;
}  

