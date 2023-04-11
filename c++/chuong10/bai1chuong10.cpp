#include<fstream>
#include<iostream>

using namespace std; 

void doc (char tentep[],int &n,int &m ,int &a) {
 
ifstream f(tentep);
if(!f)   
{ cout << "Khong the doc duoc tep tin "<<tentep<<endl;
exit(1);

} 
f>>n>>m>>a;

f.close ();

}
 int  MAX(int a,int b,int c){int max;
 max=a; 
 if(b>max )max=b;
 if(max<c)max=c; 
 
 return max; 
 }
 int  MIN(int a,int b,int c){int min;
 min=a; 
 if(b<min )min=b;
 if(min>c)min=c; 
 
 return min; 
 }
 
void ghitep(char tentep[],int &n,int &m ,int &a)
{
ofstream f1(tentep);

if(!f1)
{ cout<<"Khong the tao duoc tep tin "<<tentep<<endl;
exit(1);
}

f1<<"GTNL "<<MAX (n,m,a)<<"\nGTNN "<<MIN(n,m,a);
f1.close();
}

int main()
{

	char f[30];
int n, m,a;   
cout<<"\n Nhap ten tep doc du lieu: "; cin.getline(f,30);
doc(f,n, m,a);

 
cout<<"\n Nhap ten tep ghi du lieu :"; cin.getline(f,30);
ghitep(f,n, m,a);

return 0; 
}
