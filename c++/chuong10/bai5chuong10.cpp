#include<fstream>
#include<iostream>
using namespace std; 
 
 void  doc (char tentep[],int &n,int a[]) {

ifstream f(tentep);
if(!f)   
{ cout << "Khong the doc duoc tep tin "<<f<<endl;
exit(1);

}  
f>>n;
for(int i=0;i<n;i++)
{ 
f>>a[i]; 
} 

f.close ();
}

 
 
  int sapxep(char tentep[],int &n,int *a ,int k) {
  fstream f(tentep,ios::app);
  	{int tg; 
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
		if (a[i]<a[j]){
		
			tg=a[i];
		a[i]=a[j];
		a[j] =tg;}
		
} if(k==1){int x=1,max=a[0]; 
for(int i=1;i<n ; i++){
	if(max<a[i])
	max=a[i]; 
	
}
for(int i=1;i<n ; i++){
	if(max==a[i])
	x+=1; 
	
}
f<<"\nso gia tri lon nhat la : "<<x; 

f.close() ; 
} 

if(k==2) {


f<<"mang sau khi duoc sap xep la : "; 
	for(int i=0;i<n ; i++)
		f<<a[i]<<"  ";
  	f.close() ;}
  }
   int songuyento (char tentep[],int &n,int *a ){fstream f(tentep,ios :: app);
   int i,j=2,kq ; 
   
   for (i=0;i<n;i++){ 
   int kt=1; 
   	while (j<=a[i]/2 )
	   {
	   	if (a[i]%j==0){
		   kt=0;
		   break;}
		   j++; 
	   } 
	   
	   if(kt==1)
	   	
	   
	  return a[i];
	  
   } 

 }		 
 int chiahetcho7(char tentep[],int &n,int *a ) {
 
 fstream f(tentep,ios::app);
 int s=0; 
 for (int i=0;i<n ;i++){
 if(a[i]%7==0) {
 	s+=1; 
 }
 } 
 f<<"So phan tu chia het cho 7 la : " <<s; 
 }

void ghitep(char tentep[],int &n,int *a,int kt)
{ if(kt==1){
fstream f(tentep,ios::app);


if(!f)
{ cout<<"Khong the tao duoc tep tin"<<f<<endl;
exit(1);
} 
 chiahetcho7(tentep,n ,a );
f<<"\nso nguyen to dau tien la " << songuyento(tentep,n,a) ;
sapxep(tentep,n,a,1);


}
if(kt==2){
fstream f(tentep,ios::out );
sapxep(tentep,n,a,2) ;

} 

}

int main()
{

	char f[30];
int n,a[n] ; 
cout<<"\n Nhap ten tep doc va ghi  du lieu: "; cin.getline(f,30);
doc(f,n,a);
 ghitep(f,n,a,1) ;

cout<<"\n Nhap ten tep ghi du lieu :"; cin.getline(f,30);
ghitep(f,n,a,2) ;
return 0; 
}





















