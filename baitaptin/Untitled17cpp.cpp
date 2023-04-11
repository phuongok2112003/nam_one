#include<iostream>
using namespace std;



int main(){
	int t,a,b,c,d,dem=0;
	cout<<"Nhap vao so tien muon doi : ";
	cin>>t;
	for(int d=0;d<=t/1000;d++){

		for(int c=0;c<=t/2000;c++){

			for(int b=0;b<=t/5000;b++){

				for(int a=0;a<=t/10000;a++){
		

					if(a*10000+b*5000+c*2000+d*1000==t){ 
 					cout<<"co "<<d<<" to 1000 "<<" co "<<c<<" to 2000 "<<" co "<<b<<" to 5000 "<<" co "<<a<<" to 10000 "<<endl; dem++; 
           }
			}		}
	}
			}
			cout<<"co tat ca "<<dem<<" cach doi tien " <<endl; 
}


