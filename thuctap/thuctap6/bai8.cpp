#include <iostream>
#include <string.h>
using namespace std;
 
 void  viethoa(char* s){

s[0]=(char)(int)(s[0]-32);
for(int i=1;i<strlen(s);i++){

if(*(s+i)==' ')
*(s+i+1)=(char)(int)(*(s+i+1)-32);

}
// for(int i=0;i<strlen(s);i++)
//     cout<<*(s+i);
cout<<s;
}
int xoa(char* s,int &n,int vt){

    for(int i=vt;i<n;i++){
  *(s+i)=*(s+i+1);}
    n--;
    return n;
}
void xuli(char* s){


int n=strlen(s);
if(*s==' ')xoa(s,n,0);
while(*(s+strlen(s)-1)==' ')*(s+strlen(s)-1)='\0';
for(int i=0;i<strlen(s);)
{
   if((int) *(s+i)<=31||(int) *(s+i)>=33&&(int) *(s+i)<=64||(int) *(s+i)>=91&&(int) *(s+i)<=96||(int) *(s+i)>=123) {
        xoa(s,n,i);

    }
    else i++;
}
viethoa(s);
}
int main()
{
    char* xau=new char[265];
    cout<<"Nhap xau can nhap la ";  cin.getline(xau,256);
    xuli(xau);
     
}