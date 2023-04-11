#include<iostream>
using namespace std;
 
main(){
int a=1,*p;

p=&a;

cout<<"\ngia tri cua bien nguyen la "<<a<<" dia chi duoc luu chu trong bien con tro la "<<p<<endl;
cout<<"gia tri co san trong tai dia chi cua bien con tro la "<<*p;
}