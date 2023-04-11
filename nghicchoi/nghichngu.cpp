#include <iostream>
#include<math.h>
using namespace std;
int daohamcap1(int n,int mu[],int y[],int a){
    int tong=0;
    for(int i=0;i<n;i++){


tong+=y[i]*mu[i]*pow(a,mu[i]-1);
}
return tong;
}
int daohamcap2(int n,int mu[],int y[],int a){
    int tong=0;
    for(int i=0;i<n-1;i++){

tong+=mu[i]*(mu[i]-1)*y[i]*pow(a,mu[i]-2);

}
return tong;
}
int chinhno(int n,int mu[],int y[],int a){
    int tong=0;
   for(int i=0;i<=n;i++){
  tong+=y[i]*pow(a,mu[i]);
   }
   return tong;
}
int main(){
    int n;
    float copy=0,x0,err,x=0;
cout<<"nhap bac cua phuong trinh ";
cin>>n;
cout<<"nhap sai so "; cin>>err;
int y[n+1],mu[n+1];
for(int i=0;i<=n;i++){
    cout<<"nhap he so thu "<<i+1<<" "; cin>>y[i];
    mu[i]=n-i;
}
int a,b;
cout<<"nhap khoang cach xet nghiem "<<endl;cin>>a>>b;
 

//    cout<<daohamcap1(n,mu,y,b)<<endl;
//    cout<<daohamcap2(n,mu,y,a)<<endl;
//    cout<<chinhno(n,mu,y,a);

if(daohamcap1(n,mu,y,a)>0){


// x=x0-(chinhno(n,mu,y,x0)*(b-x0))/(chinhno(n,mu,y,b)-chinhno(n,mu,y,x0));
// copy=a;
x=a;
do{    copy=x;
    x=copy-chinhno(n,mu,y,copy)*(b-copy)/(chinhno(n,mu,y,b)-chinhno(n,mu,y,copy));
  
}while(err<9/2*abs(x-copy));
}
else if(daohamcap1(n,mu,y,a)<0){


// x=x0-(chinhno(n,mu,y,x0)*(x0-a))/(chinhno(n,mu,y,x0)-chinhno(n,mu,y,a));
// copy=b;
x=b;
do{ copy=x;
    x=copy-chinhno(n,mu,y,copy)*(copy-a)/(chinhno(n,mu,y,copy)-chinhno(n,mu,y,a));
     
}while(err<9/2*abs(x-copy));
}
cout<<"nghiem cua phuong trinh la "<<x;
}
