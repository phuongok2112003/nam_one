#include<fstream>
#include<iostream>
#include <math.h>
using namespace std; 

void doc (char tentep[],int &n,int &m,int &a) {

ifstream f(tentep);
if(!f)   
{ cout << "Khong the doc duoc tep tin "<<f<<endl;
exit(1);

}  
f>>n>>m>>a;

f.close ();

}
 int  timnghiem(int a,int b,int c,ofstream &f1){float p,x1,x2,x ; 
	 
	  
	  p = sqrt(b*b -4*a*c) ;
	  if (a==0 )
 
	 {
	 	
	 	if (b==0){
		 
 	
	 		if(c==0){
			 
	 	
	 		f1<<"pt vo so nghiem"<< endl;}
	 	
	 		else if (c!=0){
			 
		 	
	 		f1<<"pt vo nghiem"<<endl;}
			 }
	 	
	 
 	     if ( b!=0 &&c!=0 ) {
		 
		 	 
 		         float x=  float(-c/b);
			    f1<<"pt co nghiem x = "<<x<< endl; }}
 	        
 
 	else if (a!=0){
	 
	 
	 	 	if (p==0){
			  
 	
	 	 		f1<<" pt co nghiem kep x1=x2= "<< -b/2*a<< endl;}
	 	 	
	 	 	else if (p>=0)
			  	
			{
				  x1=(-b+p)/2*a;
			  	  x2=(-b-p)/2*a;	
	 	 		  f1<<"pt co nghiem x1= " <<x1<<endl;
			      f1<<"pt co nghiem x2= "<<x2<< endl; }
	 	 	else if ((b*b -4*a*c)<0)
	 	 	
	 	 		f1<<"pt vo nghiem"<< endl;
	 	 	 
 }}
 
 
void ghitep(char tentep[],int &n,int &m,int &a){
ofstream f1(tentep);

if(!f1)
{ cout<<"Khong the tao duoc tep tin"<<f1<<endl;
exit(1);
}

timnghiem(n,m,a,f1) ;
f1.close();
}

int main()
{ 	char f[30];
int n, m,a; 
cout<<"\n Nhap ten tep doc du lieu: "; cin.getline(f,30);
doc(f,n,m,a);

 
cout<<"\n Nhap ten tep ghi du lieu :"; cin.getline(f,30);
ghitep(f,n,m,a);

return 0; 
}
