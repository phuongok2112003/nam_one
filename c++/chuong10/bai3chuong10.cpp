#include<fstream>
#include<iostream>
using namespace std; 

void doc (char tentep[],int &n,int &m,int &a) {

ifstream f(tentep);
if(!f)   
{ cout << "Khong the doc duoc tep tin "<<f<<endl;
exit(1);

}  
f>>n>>m>>a;

f.close ();

}
 int kiemtra(int a,int b,int c,ofstream &f1){
 	if (a+b<c||a+c<b||b+c<a)f1<<"khong la tam giac " <<endl;
	  else if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)f1<<"tam giac vuong " <<endl; 
 	else if (a==b||b==c ||a==c) f1<<"tan giac can "<<endl; 
else if (a==b&a==c)f1<<"tam giac deu "<<endl;
  else if (a*a==b*b+c*c&&b==c||b*b==a*a+c*c&&a==c||c*c==a*a+b*b&&a==b)f1<<"tam giac vuong can "<<endl; 
 else f1<<"tam giac thuong "<<endl; 
 
 
 
  }
 
void ghitep(char tentep[],int &n,int &m,int &a)
{
ofstream f1(tentep);

if(!f1)
{ cout<<"Khong the tao duoc tep tin"<<f1<<endl;
exit(1);
}
kiemtra(n,m,a,f1) ;

f1.close();
}

int main()
{

	char f[30];
int n, m,a; 
cout<<"\n Nhap ten tep doc du lieu: "; cin.getline(f,30);
doc(f,n,m,a);

 
cout<<"\n Nhap ten tep ghi du lieu :"; cin.getline(f,30);
ghitep(f,n,m,a);

return 0; 
}
