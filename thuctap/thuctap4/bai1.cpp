#include<iostream>
#include<string.h>
using namespace std;
int main(){
 char s[10];
 cout<<"nhap chuoi can nhap la "; cin.getline(s,10);
 cout<<"cach 1 xau dao nguoc la ";
 for(int i=strlen(s);i>=0;i--) cout<<s[i];
cout<<"\ncach hai ";
cout<<strrev(s);

}