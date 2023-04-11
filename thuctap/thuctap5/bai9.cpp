#include<iostream>
using namespace std;
int giaithua(int *p){
    int x=*p-1;
    return (*p==1)?1:(*p)*giaithua(&x);

}
main(){
int n;
cout<<"nhap n "; cin>>n;

 cout<<"giai thua can tim la "<<giaithua(&n);


}