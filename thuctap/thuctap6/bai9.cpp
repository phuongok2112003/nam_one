#include <iostream>
#include <string.h>
using namespace std;
 
 
int xoa(char* s,int &n,int vt){

    for(int i=vt;i<n;i++){
  *(s+i)=*(s+i+1);}
    n--;
    return n;
}
void xuli(char* s){

int j=0;
int n=strlen(s);
if(*s==' ')xoa(s,n,0);
while(*(s+strlen(s)-1)==' ')*(s+strlen(s)-1)='\0';
for(int i=0;i<strlen(s);)
{
   if(*(s+i)==' '&& *(s+i+1)==' ') {
        xoa(s,n,i);

    }
    else i++;
}
for(int i=0;i<strlen(s);i++)
 if(*(s+i)==' ') { j++;

}
cout<<" trong chuoi co tat ca "<<j+1<<" tu "<<endl;
}
int main()
{
    char* xau=new char[265];
    cout<<"Nhap xau can nhap la ";  cin.getline(xau,256);
 
    xuli(xau);
      
}