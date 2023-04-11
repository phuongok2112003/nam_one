#include<iostream>
#include<math.h>
using namespace std;
void nghiem(int *a,int *b,int *c){
     
     if(*a==0){
         if(*b==0){
             if(*c==0) cout<<"phuong trinh co vo so nghiem ";
             else cout<<"phuong trinh vo nghiem ";

   
       
         } 
         else { 
             cout<<"pt nghiem la nghiem "<<(float)-*c/ *b; 
            
         }
     }
    else {
        int deta=pow(*b,2)-4**a**c;
        if(deta==0)cout<<"phuong trinh co nghiem kep "<<(float)-*b/ 2**a;
        if(deta<0) cout<<"phuong trinh vo nghiem ";
        else if(deta>0){
            cout<<"nghiem x1= "<<(float)(-*b-sqrt(deta))/(2**a);
            cout<<"\nnghiem x2= "<<(float)(-*b+sqrt(deta))/(2**a);
        }

    }
 }
main(){
int a,b,c;
cout<<"nhap a , b ,c\n"; cin>>a>>b>>c;

nghiem(&a,&b,&c);


}