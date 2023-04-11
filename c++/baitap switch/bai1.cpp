#include<iostream >
#include <string > 
#include <math.h> 
using namespace std;

 int  timnghiem(float a,float b,float c){float p,x1,x2,x ; 
	 
	  
	  p = sqrt(b*b -4*a*c) ;
	  if (a==0 )
 
	 {
	 	
	 	if (b==0){
		 
 	
	 		if(c==0){
			 
	 	
	 	cout <<"pt vo so nghiem"<< endl;}
	 	
	 		else if (c!=0){
			 
		 	
	 		cout <<"pt vo nghiem"<<endl;}
			 }
	 	
	 
 	     if ( b!=0 &&c!=0 ) {
		 
		 	 
 		         float x=  float(-c/b);
			   cout <<"pt co nghiem x = "<<x<< endl; }}
 	        
 
 	else if (a!=0){
	 
	 
	 	 	if (p==0){
			  
 	
	 	 	cout <<" pt co nghiem kep x1=x2= "<< -b/2*a<< endl;}
	 	 	
	 	 	else if (p>0)
			  	
			{
				  x1=(-b+p)/2*a;
			  	  x2=(-b-p)/2*a;	
	 	 		  cout <<"pt co nghiem x1= " <<x1<<endl;
			      cout <<"pt co nghiem x2= "<<x2<< endl; }
	 	 	else if ((b*b -4*a*c)<0)
	 	 	
	 	 	cout <<"pt vo nghiem"<< endl;
	 	 	 
 }}
 
 MAX(int a,int b,int c){int max;
 max=a; 
 if(b>max )max=b;
 if(max<c)max=c; 
 
cout<<"so lon nhat la "<< max; 
 }
  MIN(int a,int b,int c){int min;
 min=a; 
 if(b<min )min=b;
 if(min>c)min=c; 
 
 cout<<"\nso nho  nhat la "<< min; 
 }

int main(){
	float  a,b,c;
	int kt ; 
	
	cout<<"nhap a " ;cin>>a;
	cout<<"nhap b " ;cin>>b;
	cout<<"nhap c "; cin>>c; 
	cout<<"1. Tnh tong a+b+c "<<endl;
	cout<<"2. Giai phuong trinh ax^2+bx+c=0 "<<endl;
	cout<< "3. Tim so lon nhat nho nhat "<<endl; 
	
	
	 
do{cout<<"nhap chuong trinh can giai "; 
	cin>>kt ;
	 
} while (kt>3||kt<0); 
	

	
	
	switch (kt ) {
		
	case 1 : cout<<"Tong a+b+c= " <<a+b+c; break; 
	case 2 : timnghiem(a,b,c) ; break; 
	case 3 :{MAX (a,b,c); MIN(a,b,c)	;
	
	} 
		
		
	
	
	
	
} }
