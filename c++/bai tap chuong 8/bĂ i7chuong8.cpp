#include <iostream>
#include<math.h> 
using namespace std; 

 unsigned long mu( unsigned long ); 

 int main()
 {
 int n; 
 do  {
 cout<<" nhap so n = " ; cin>>n;
}while (n<0) ;
 
cout<<"ket qua la : "<<mu(n) ;
 
 } 

 unsigned long mu( unsigned long n )
 {

 if ( n <= 1 )
 return 1;


 else
 return pow(n,n) * mu (n - 1);

 } 
