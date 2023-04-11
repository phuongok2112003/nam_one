//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
void ten(char s[]){
   int vt=0;
for(int i=strlen(s)-1 ;s[i]!=' ';i--) 
 {
   vt=i;
 }
cout<<"ten cua nguoi do la ";
for(int i=vt;i<strlen(s);i++)cout<<s[i];

}

int main(){
char s[30];

 cout<<"nhap ho va ten la "; 
 
 cin.getline(s,30);
 
 ten(s);

}