//loai bỏ số chắn ra khỏi só n nhập nòa

#include <iostream>
#include<math.h>
using namespace std;
int xoa(int a[],int &n,int vt){
    for(int i=vt;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    return n;
}
int main() {
   int n; cout<<"nhap n "; cin>>n;
  int dem=0;
  int a=n;
  int temp=0;
    while(n>0){
        n/=10; // hay n = n /10;
        dem++;
    }
    
    int x[10];
    int i=0;
    while(a>0){
 
    x[i]=a%10;
    a/=10;
      i++;  
}

 for(int j=0;j<i;j++)cout<<x[j]<<" ";
cout<<endl;
for(int j=0;j<i;){
    if(x[j]%2==0){
        xoa(x,i,j);
    }
    else j++;
    
}
 for(int j=0;j<i;j++)cout<<x[j]<<" ";
for(int j=i-1;j>=0;j--){
    temp=temp*10+x[j];
}
cout<<temp;
    return 0;
}










