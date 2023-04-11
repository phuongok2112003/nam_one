#include<iostream>
#include<string>
using namespace std;


int main(){
 char hoten[30]; int dodai=0;
 cout<<"ho ten la "; cin.getline(hoten,30);
 for(int i=0;hoten[i]!='\0';i++) dodai++;
 for(int i=0;i<dodai;){

     if(hoten[i]==' ' and hoten[i+1]==' ')
     {
         for(int vt=i;vt<dodai;vt++){

        
        hoten[vt]=hoten[vt+1]; }
      dodai--; 
      } 
 
 else i++;
 } 
cout<<"sau khi duoc bien doi la ";
for(int i=0;i<dodai;i++)
cout<<hoten[i];
}