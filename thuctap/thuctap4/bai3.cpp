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
     if(s[i]=='a'||s[i]=='b')dem++;
    
 }
cout<<"co tat ca "<<dem<<" ki tu a va b "<<endl;

}
