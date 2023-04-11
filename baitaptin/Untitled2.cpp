#include<iostream>
#include<math.h>
using namespace std;



int main(){
int n,s=0; 
cout<<"nhap n "; cin>>n;
for(int i=1;i<=n;i++) 
s= pow(-1,i-1)*i*i+s; 
cout<<"tong la " <<s; 


}


