#include<iostream>
using namespace std;
nhap(int &n,int a[]) 
{
	for(int i=0;i<n;i++) {cout<<"a["<<i<<"] =";cin>>a[i]; 
	}
	
}
xuat(int &n,int a[]) {
	for(int i=0;i<n;i++) {cout<<"a["<<i<<"] ="<<a[i]<<endl; 
	}

}
sxsochan(int &n,int a[]){
	for(int i=0;i<n;i++) { 
	if(a[i]%2==0) 
	{for (int j=0;j<n;j++) 
	if(a[j]%2==0&&a[i]<a[j]) swap(a[i],a[j]) ;
	}
	}
	
} 
sxsole(int &n,int a[]){
	for(int i=0;i<n;i++) { 
	if(a[i]%2!=0) 
	{for (int j=0;j<n;j++) 
	if(a[j]%2!=0&&a[i]>a[j]) swap(a[i],a[j]) ;
	}
	}
	
} 
xoamangtai(int  a[],int &n,int  vitrixoa) { 
for(int i=vitrixoa;i<n;i++){	
 

 	a[i]=a[i+1];
	 
 
 	
 }n--; 
 
 return n; }
 
xoa(int  a[],int &n,int  so){
	
	for (int i=0;i<n;) {
		
	if(a[i]==so) 
	{
			xoamangtai(a,n,i) ;	
		}
	else {i++; 
	}
	}
} 

int main(){
int n;
int  *a=new int[1] ;
int so; 
cout<<"nhap n "; cin>>n; 
nhap (n,a) ;
sxsochan(n,a);
cout<<"sap xep cac phan tu chan tang dan "<<endl; 
xuat(n,a); 
cout<<"sap xep cac phan tu le giam dan "<<endl; 
sxsole(n,a);
xuat(n,a); 
cout<<"nhap so can xoa "<<endl;cin>>so; 
xoa(a,n,so) ;
xuat(n,a); 
 delete []a; 
}


