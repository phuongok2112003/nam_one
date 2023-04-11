#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n, m;
	cout<<"Nhap chieu cao: ";
	cin>>n;
	m = n+5;
	cout<<setw(m)<<"*"<<endl;
	m--;
	for(int i = 2; i < 2*n-3; i+=2) {
      		cout<<setw(m)<<"*"<<setw(i)<<"*"<<endl;
      		m--;
   	}
   	cout<<setw(m);
   	for(int i = 1; i <= 2*n-1; i++)
   		cout<<"*";
	cout<<endl;}
