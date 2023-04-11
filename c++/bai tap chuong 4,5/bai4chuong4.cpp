#include<iostream>
using namespace std;
int main(){
    float  a, b, c;
    cout<<"Nhap  a nao : ";
    cin>>a;
    cout<<"Nhap b nao : ";
    cin>>b;
    if (a==0&&b==0||a==0&&b<0) cout<<"bat pt vo nghiem" <<endl;
    if (a==0&&b>0) cout<<" bat pt vo so nghiem"<< endl;
	 
    if (a>0 ) 
     cout<<"nghiem cua bpt la x >" <<-b/a <<endl;
     else if (a <0)  
      cout << "nghiem cua  bpt la x <"<<-b/a<< endl ; 

    return 0;
}
 