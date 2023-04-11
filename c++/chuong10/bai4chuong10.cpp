#include<fstream>
#include<iostream>
using namespace std; 
 int sohoanhao(char tentep[],int &n,int a[]);
 void  doc (char tentep[],int &n,int a[]) {

ifstream f(tentep);
if(!f)   
{ cout << "Khong the doc duoc tep tin "<<tentep<<endl;
exit(1);

}  
f>>n;
for(int i=0;i<n;i++)
{ 
f>>a[i]; 
} 

f.close ();
}

 
  int sohoanhao(char tentep[],int &n,int *a){fstream f(tentep,ios :: app);
  
  	int i=0; 
  	 
	 while ( i<n) {
 		int s=0;
    int 	j=1;
    while (j<=a[i]/2) {
     if ( a[i]%j ==0)
	 {
 	s=s+j;}
	 j++;	
 	 
    }
			if (s==a[i]) {
		  f<<"\ncac so hoan hao trong mang la "<<a[i];
		  } 
		  i++; 
		 }
  	
  	
  	
  } 
  int sapxep(char tentep[],int &n,int *a ) {
  	ofstream f(tentep);
  	{int tg; 
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
		if (a[i]>a[j]){
		
			tg=a[i];
		a[i]=a[j];
		a[j] =tg;}
		
} f<<"mang sau khi duoc sap xep la : "; 
	for(int i=0;i<n ; i++)
		f<<a[i]<<"  ";
  	f.close() ;
  }
   int songuyento (char tentep[],int &n,int *a ){fstream f(tentep,ios :: app);
   int i,j=2 ; 
   
   for (i=0;i<n;i++){ 
   int kt=1; 
   	while (j<=a[i]/2 )
	   {
	   	if (a[i]%j==0){
		   kt=0;
		   break;}
		   j++; 
	   } 
	   
	   if(kt==1){
	   f<<"\nso nguyen to "<<a[i]<<"\n"; }
   } 
 
 }		 
 int daoNguoc(int number) {
    int res = 0;
    while (number > 0) {
        res = res * 10 + number % 10;
        number /= 10;
    }
    return res;
}
 
bool isCheck(int number) {
    if (number == daoNguoc(number))
        return true;
    return false;
    
}
sodoixung(char tentep[],int &n,int *a){fstream f(tentep,ios :: app);	
f<<"\ncac so doi xung la ";
for (int i = 0; i < n; i++){

        if (isCheck(a[i]))
    f << a[i]<<"  ";}
    
    f.close();
}
void ghitep(char tentep[],int &n,int a[],int kt )
{ if(kt==1){
fstream f(tentep,ios::app);


if(!f)
{ cout<<"Khong the tao duoc tep tin"<<f<<endl;
exit(1);
} 

  
songuyento (tentep,n,a) ;
 
sohoanhao(tentep,n,a); 
sodoixung(tentep,n,a);

    

}
if(kt==2){
fstream f(tentep,ios::out );
sapxep(tentep,n,a);
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





















