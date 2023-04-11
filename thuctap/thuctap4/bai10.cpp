//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int xoa(char a[],int vt,int &n){
for(int i=vt ;i<n;i++) 
 {
     a[i]=a[i+1];
    
 }
n--;
return n;
}

int main(){
char s[30];
 
 cout<<"nhap xau la "; 
 
 cin.getline(s,30);
 int n=strlen(s);
 for(int i=0 ;i<strlen(s);) 
 {
    if(s[i]==' '&&s[i+1]==' ')
    xoa(s,i,n);
    else i++;
    
 }
 for(int i=0;i<n;i++)cout<<s[i];
}