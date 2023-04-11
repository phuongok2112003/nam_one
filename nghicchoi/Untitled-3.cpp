
#include <iostream>
#include<math.h>
using namespace std;
// int a,c,b,y,x;
// #define y a*pow(x,2)+b*x+c
   float y( float a, float b, float c, float x) {
    return  a*pow(x,3)+b*x+c;
   }
int main(){
 float a,c,b,epsilon;
 cout<<"nhap epsilon ";cin>>epsilon;
   
    cout<<"nhap he so cho phuong trinh "; cin>>a>>b>>c;
    float x1,x2;
    cout<<"nhap khoang nghiem can xet ";
    cin>>x1>>x2;
   
    if(y(a,b,c,x1)*y(a,b,c,x2)<0){
    do{
        float x=(x2+x1)/2;
 if(y(a,b,c,x1)*y(a,b,c,x)<0){
       x2=x;
  
   
 }
  else x1=x;
 }while((x2-x1)>epsilon);
 }
cout<<x1<<"  "<<x2;

}















