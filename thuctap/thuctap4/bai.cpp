#include <iostream>
#include <string.h>
using namespace std;

char *ho(char s[])
{
    char *hoj = new char[strlen(s) + 1];
    cout << "\nho cua nguoi do la ";
    int i = 0;
    for (i; s[i] != ' '; i++)
    {
        hoj[i] = s[i];
    }
    hoj[i] = '\0';
  
    return hoj;
     
}
char* ten(char s[]){
    char* tenn=new char [10];int vt=0;
for(int i=strlen(s)-1 ;s[i]!=' ';i--) 
 {
   vt=i;
 } int j=0;
cout<<"\nten cua nguoi do la ";
for(int i=vt;i<strlen(s);i++){
tenn[j]=s[i];
j++;
}
tenn[j]='\0';
return tenn;

}
char* dem(char s[]){
    cout<<"\nten dem cua nguoi do la ";
char* tendem=new char[20];
int j=0,vtd=0,vtc=0;
for(int i=0;s[i]!=' ';i++)
vtd=i+1;
for(int i=strlen(s)-1;s[i]!=' ';i--)
vtc=i-1;
for(int i=vtd;i<=vtc;i++){


tendem[j]=s[i];
j++;}
tendem[j]='\0';
return tendem;

}
void  viethoa(char s[]){

s[0]=(char)(int)(s[0]-32);
for(int i=1;i<strlen(s);i++){

if(s[i]==' ')
s[i+1]=(char)(int)(s[i+1]-32);

}
for(int i=0;i<strlen(s);i++)
    cout<<s[i];

}

int xoa(char s[],int &n,int vt){

    for(int i=vt;i<n;i++){
    s[i]=s[i+1];}
    n--;
    return n;
}
void xuli(char s[]){

int j=0;
int n=strlen(s);
for(int i=0;i<strlen(s);)
{
    if((int)s[i]<=31||(int)s[i]>=33&&(int)s[i]<=64||(int)s[i]>=91&&(int)s[i]<=96||(int)s[i]>=123) {
        xoa(s,n,i);

    }
    else i++;
}


}
int main()
{
    char s[30];

    cout << "nhap ho va ten la ";

    cin.getline(s, 30);
   xuli(s);
   cout<<"viet hoa ten nguoi ay la ";
   viethoa(s);

    cout << ho(s);
    cout<<ten(s);
    cout<<dem(s);

}