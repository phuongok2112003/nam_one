#include<fstream>
#include<iostream>
using namespace std; 
 int songuyento (char tentep[],int &n,int *a ){fstream f(tentep,ios :: out);
   int i ; 
   int dem=0;
   for (i=0;i<n;i++){ 
   int kt=1,j=2; 
   	while (j<=a[i]/2 )
	   {
	   	if (a[i]%j==0){
		   kt=0;
		   break;}
		   j++; 
	   } 
	   
	   if(kt==1&&a[i]!=1){
	   f<<"\nso nguyen to "<<a[i]<<"\n";
	   dem++; }
   } 
 f<<"trong mang co tat ca "<<dem<<" so nguyen to "<<endl;
 }	 
void ghitep(char tentep[],int &n,int a[],int kt)
{ 
fstream f(tentep,ios::out );


if(!f)
{ cout<<"Khong the tao duoc tep tin "<<endl;
exit(1);
} 
if(kt==1){


f<<n;
f<<'\n';
for(int i=0;i<n;i++){
f<<a[i]<<" ";
}
f.close();
}
if(kt==2)
{


fstream f("D:\\thuctap\\output.txt",ios::out );
songuyento("D:\\thuctap\\output.txt",n,a);
f.close();
}
 

}
void intrungbinh(int n,int a[]){
	int dem=0,tong=0;
	for(int j=0;j<n;j++){
		if(a[j]%2!=0)
		{
			tong+=a[j];
			dem++;
		}
	}

	cout<<"trung binh cac so le trong mang la "<<(float)tong/dem<<endl;
}
 void  doc (char tentep[],int &n,int a[]) {

ifstream f(tentep);
if(!f)   
{ cout << "khong tin đuoc tep " <<endl;
exit(1);

}  
f>>n;
for(int i=0;i<n;i++)
{ 
f>>a[i]; 
} 

f.close ();
}


int main()
{

char f[30];
int n,a[10] ;
cout<<"nhap n "; cin>>n;
for(int i=0;i<n;i++)
{
	cout<<"a["<<i<<"]= "; cin>>a[i];
} 


ghitep("input.txt",n,a,1);
doc("input.txt",n,a);

intrungbinh(n,a);

ghitep("output.txt",n,a,2) ;
return 0; 
}



















