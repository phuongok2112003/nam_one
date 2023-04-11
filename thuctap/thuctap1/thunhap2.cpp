#include<iostream>
#include<string.h> 


using namespace std;



int main(){
string  s ;int j=0;  
cout<<" nhap cac tu can nhap la :" ;
getline(cin,s);
cout<<"Ho cua nguoi do la "; 
 for ( int i=0 ; i<s.length();i++)
 	{
  if ( s[i] != ' ' )
  cout<<s[i] ;
  else break; 
    
  }
 
   cout<<"\nten cua nguoi do la "; 
 for ( int i=s.length(); i>0;i--)
 
 	{
  if ( s[i] != ' ' ){ 
   j=i; 
   
  }
 
  
  

 else 
 
 
 break; 
 }
 for(int i=j;i<s.length();i++) 
cout<<s[i] ; 
}

