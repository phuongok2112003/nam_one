#include <iostream>
 #include <iomanip>
using namespace std; 

 unsigned long giaithua( unsigned long ); 

 int main()
 {
 int n,k; 
 do  {
 cout<<" nhap so n = " ; cin>>n;
 cout<<"nhap chap k = "; cin>>k; }while (n<k) ;
 
cout<<"to hop chap k cua n = " <<giaithua(n)/(giaithua(k)*giaithua(n-k) );
 return 0; 
 } 

 unsigned long giaithua( unsigned long number )
 {

 if ( number <= 1 )
 return 1;


 else
 return number * giaithua( number - 1 );

 } 
