#include <iostream>
#include <string.h>
using namespace std;
 
 
int xoa(int* s,int &n,int vt){

    for(int i=vt;i<n;i++){
  *(s+i)=*(s+i+1);}
    n--;
    return n;
}

int main()
{
  int n,k;
cout<<"so luong phan tu mang la "; cin>>n;
    int *p= new int [n];
    for(int i=0;i<n;i++){
        cout<<"phan tu thu "<<i<<" "; cin>>*(p+i);
    } 
    cout<<"Ban muon xoa phan tu o vi tri k la "; cin>>k;
    xoa(p,n,k);
    cout<<"Mang sau khi xoa la ";
   for(int i=0;i<n;i++) cout<<*(p+i)<<"  ";
}