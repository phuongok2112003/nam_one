#include<iostream>
using namespace std;
 
main(){
int a=2,b=3,*p,*q;

p=&a;
q=&b;
int temp;
temp=*p;
*p=*q;
*q=temp;
cout<<"so a luc sau la "<<*p<<endl;
cout<<"so a luc sau la "<<*q<<endl;


}