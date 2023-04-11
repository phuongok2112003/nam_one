#include <iostream>

 #include<string.h>
using namespace std;
int main()
{ 
    char a[100];
    cin.getline(a,100);
    int cnt[256];
    int dem1=0,dem2=0;
   
    
    for(int i=0;i<=strlen(a)/2;i++){
        if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        dem1++;
    }
    for(int i=strlen(a)/2+1;i<=strlen(a);i++){
      if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        dem2++;
    }
    if(dem1==dem2) cout<< "true";
    else cout<<"false ";
    
    
}