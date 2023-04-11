#include<iostream>
#include <math.h>
using namespace std;



int main(){
int n,i=0,s=0;
cout<<"Nhap so "; cin>>n;
int a=n; 
int b=a; 
while(n>0){ n/=10; i++; 
} 
while(a>0) { int m=a%10;
 s=s+pow(m,i) ;
 a/=10; 
	
}
 

if(b==s) cout<<"Day la  Armstrong. " ;
else cout<<"Day khong phai la  Armstrong." ;

}
