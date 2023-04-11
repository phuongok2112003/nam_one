#include<iostream>
using namespace std;
 int timmax(int *a,int *b){
     return (*a>*b)? *a:*b;
 }
main(){
int a,b,c;
cout<<"nhap a , b ,c\n"; cin>>a>>b>>c;
int d=timmax(&a,&b);
cout<<"max trong ba so la "<<timmax(&d,&c);


}