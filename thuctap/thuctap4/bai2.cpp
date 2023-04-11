#include<iostream>
#include<string.h>
using namespace std;
int main(){
 char s[10];
 int dem=0;
 cout<<"nhap chuoi can nhap la "; 
 gets(s);
 //cin.getline(s,10);
 
 for(int i=0 ;i<=strlen(s);i++) 
 {
     if(s[i]!=' '&&s[i+1]==' ')dem++;
 }

cout<<"chuoi nhap co "<<dem+1<<" tu "<<endl;
}