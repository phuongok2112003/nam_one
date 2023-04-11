#include <iostream>
 
using namespace std;
  
int main()
{int n;
cout<<"so luong phan tu mang la "; cin>>n;
    int *p= new int [n];
    for(int i=0;i<n;i++){
        cout<<"phan tu thu "<<i<<" "; cin>>*(p+i);
    }
    int dem=0;
 for(int i=0;i<n;i++){
     if(*(p+i)%2==0) dem++;
        
    }
    cout<<" trong day so co tat ca "<<dem<<" so chan "<<'\n';
}