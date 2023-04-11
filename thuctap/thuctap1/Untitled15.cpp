#include<iostream>
using namespace std;
 Chuyen(int n , char a, char b, char c ){
    if(n==1){
        cout<<"\t"<<a<<"-------"<<c<<endl;
          
    }
    else{

   Chuyen(n-1,a,c,b);
    Chuyen(1,a,b,c);
  Chuyen(n-1,b,a,c);
  		} 
    }
int main(){
    
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    Chuyen(n,'A','B','C');
}
