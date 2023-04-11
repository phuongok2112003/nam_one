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
void tongcheochinh(int  a[][10],int m){
	cout<<"cac phan tu le tren duong cheo chinh la "<<endl;
	for(int i=0;i<m;i++){
		if(a[i][i]%2!=0)
	cout<<" "<<a[i][i]<<" "<<endl;
} }
 
 void tong(int  a[10][10],int m){int tong=0;
for(int i=0;i<m;i++)

tong+=a[i][m-i-1];
cout<<"tong cac phan tu tren duong cheo phu la "<<tong <<endl;
}
main(){
	int m;
	cout<<"Chi so kich co mang : ";cin>>m;
	
	int  a[10][10];
	nhap(a,m);
	xuat(a,m);
	tongcheochinh(a,m);
    tong(a,m);
}