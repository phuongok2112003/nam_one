#include<iostream>
#include<iomanip>
using namespace std;
void nhap(int  a[][10],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];
		}
	}
}
void xuat(int  a[][10],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
}
void maxcheochinh(int  a[][10],int m){
	
    int max=a[0][0];
	for(int i=1;i<m;i++){
		if(a[i][i]>=max)
	max=a[i][i];

} 
cout<<"max tren duong cheo chinh la "<<max<<endl;
}
 int kt(int n){

     int kt=0,s=0;
     for(int i=1;i<=n/2;i++)
     if(n%i==0) s+=i;
      return kt =(s==n)? 1:0;

 }
 void sohoanthien(int  a[10][10],int m){
for(int i=0;i<m;i++){


if(kt(a[i][m-i-1])==1)
cout<<"so hoan thien tren duong cheo phu la "<<a[i][m-i-1]<<endl;
}
}
main(){
	int m;
	cout<<"Chi so kich co mang : ";cin>>m;
	
	int  a[10][10];
	nhap(a,m);
	xuat(a,m);
	sohoanthien(a,m);
    maxcheochinh(a,m);
}