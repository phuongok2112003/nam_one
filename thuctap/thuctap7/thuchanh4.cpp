
#include <iostream>

#include<iomanip>
using namespace std;
#define pi 3.14
typedef struct 
{
float r; 
float s; 
float p; 
}hinhtron;

void nhap(int &n,hinhtron x[]){
     cout<<"Nhap so hinh tron la "; cin>>n;
     for(int i=0;i<n;i++){
      cout<<"Nhap ban kinh cua hinh tron thu "<<i+1<<"  "; cin>>x[i].r;
      x[i].p=x[i].r*2*pi;
      x[i].s=x[i].r*x[i].r*pi;

     }

}
void intheodiemtich(int n,hinhtron x[],int kt){

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
    if(x[i].s>x[j].s)
    swap(x[i],x[j]); }
}
if(kt==1){
    

cout<<"sau khi sap xep theo thu tu tang dan cua diem tich cac hinh tron ta duoc "<<endl;
cout<<setw(5)<<"stt"<<setw(15)<<"ban kinh"<<setw(15)<<"chu vi"<<setw(15)<<"dien tich"<<endl;
for(int i=0;i<n;i++){
    cout<<setw(5)<<i+1<<setw(15)<<x[i].r<<setw(15)<<x[i].p<<setw(15)<<x[i].s<<endl;
    }}
    if(kt==2){
        cout<<"sau khi sap xep theo thu tu tang dan cua diem tich cac hinh tron ta duoc dien tich lon nhat cua hinh tron la  "<<endl;
cout<<setw(5)<<"stt"<<setw(15)<<"ban kinh"<<setw(15)<<"chu vi"<<setw(15)<<"dien tich"<<endl;
   cout<<setw(5)<<1<<setw(15)<<x[n-1].r<<setw(15)<<x[n-1].p<<setw(15)<<x[n-1].s<<endl;
    }

}
void indientichmax(int n,hinhtron x[]){
   float temp=x[0].s;
   int vt=0;
   for(int i=1;i<n;i++){
    if(temp<x[i].s){
        temp=x[i].s;
        vt=i;
    }
     }
    cout<<"sau khi sap xep theo thu tu tang dan cua diem tich cac hinh tron ta duoc dien tich lon nhat cua hinh tron la  "<<endl;
cout<<setw(5)<<"stt"<<setw(15)<<"ban kinh"<<setw(15)<<"chu vi"<<setw(15)<<"dien tich"<<endl;
   cout<<setw(5)<<1<<setw(15)<<x[vt].r<<setw(15)<<x[vt].p<<setw(15)<<x[vt].s<<endl;  
}

void intheochuvi(int n,hinhtron x[]){

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){

   
    if(x[i].p<x[j].p)
    swap(x[i],x[j]);  }
}
cout<<"sau khi sap xep theo thu tu giam dan cua chu vi cac hinh tron ta duoc "<<endl;

cout<<setw(5)<<"stt"<<setw(15)<<"ban kinh"<<setw(15)<<"chu vi"<<setw(15)<<"dien tich"<<endl;
for(int i=0;i<n;i++){
    cout<<setw(5)<<i+1<<setw(15)<<x[i].r<<setw(15)<<x[i].p<<setw(15)<<x[i].s<<endl;
    }
}

int main() {
   int n;
hinhtron*x=new hinhtron[n];
nhap(n,x);
 intheodiemtich(n,x,1);
intheochuvi(n,x);
 //intheodiemtich(n,x,2);
 indientichmax(n,x);
delete[]x;

}