#include<iostream>
#include<string.h> 
using namespace std;
main()
{ int sotu=0, m=0,n=0; 
char s[30];
cout<<" nhap cac tu can nhap la :" ;
cin.getline(s,30);
 for ( int i=0 ; i<strlen(s);i++)
 	{
  if ( s[i] == ' ' && s[i + 1] != ' ')
    sotu++; 
  }
   cout<<" so tu da nhap la " <<sotu+1; 
   strrev(s);
   cout<<"\n" <<s;
   for ( int i=0 ; i<=strlen(s);i++){
  if (s[i]=='a')
    m++; 
    if (s[i]=='b')
	n++; 
  } 
  cout<<"\nso lan 'a ' xuat hien la " <<m; 
  cout<<"\nso lan 'b ' xuat hien la " <<n<<endl; 
}
