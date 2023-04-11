#include <iostream>
 
using namespace std;
  bool kt(int n){
 int dem=0;
 for(int i=1;i<=n/2;i++){
     if(n%i==0)dem++;
 }
 if(n==1||n==2||n==3) return true;
return (dem==1)?true:false;
  }
int main()
{int n;
cout<<"so luong phan tu mang la "; cin>>n;
    int *p= new int [n];
    for(int i=0;i<n;i++){
        cout<<"phan tu thu "<<i<<" "; cin>>*(p+i);
    }
    int dem=0;
 for(int i=0;i<n;i++){
     if(kt(*(p+i))) dem++;
        
    }
    cout<<" trong day so co tat ca "<<dem<<" nguyen to "<<'\n';
}