#include<iostream>
using namespace std;
void nghiem(int *a,int *b){
     
     if(*a==0){
         if(*b==0){

        cout<<"pt vo so nghiem ";
       
         } 
         else { 
             cout<<"pt vo nghiem "; 
            
         }
     }
    else {
        cout<<" nghiem cua phuong trinh la "<<(float)(-*b)/ *a;
    }
 }
main(){
int a,b;
cout<<"nhap a , b \n"; cin>>a>>b;

nghiem(&a,&b);


}