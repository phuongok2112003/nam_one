#include <iostream>
#include<string.h>
using namespace std;

int main() {
char* a; 
 int dem=0;
 cout<<"nhap chuoi can nhap "; cin>>a;
cout<<(int)a[1];
for(int i=0;i<strlen(a);i++){
    if((int)a[i]>=48&&(int)a[i]<=57&&((int)a[i+1]<48||(int)a[i+1]>57)||((int)a[strlen(a)-1-1]>=48&&(int)a[strlen(a)-1-1]<=57&&a[strlen(a)-1]=='\0')){
    dem++;}
}

   cout<<"trong chuoi co tat ca "<<dem<<" so ";
   delete a;
}