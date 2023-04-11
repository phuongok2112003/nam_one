#include<iostream>
using namespace std;

int main(){
 int n=1;
 float s=0,a ; 
 
do{
cout<<"nhap a ";
cin>>a; 


} while(a<=1||a>=2);

do{
 s=s+ (float )1/n;
	n++;
} while (s<a);
cout<<"tong la "<<s;
cout<<"\nn cam tim la "<<n; 
}






