#include<iostream>
using namespace std;



int main(){
	int t,t1000,t2000,t5000,t10000;
	cout<<"Nhap vao so tien muon doi : ";
	cin>>t;
		t10000=t/10000;
		t=t-t10000*10000;
		t5000=t/5000;
		t=t-t5000*5000;
		t2000=t/2000;
		t1000=t-t2000*2000;
		if(t10000!=0)
	cout<<"tien co menh gia 10000 co "<<t10000<<" to "<<endl;
   if(t5000!=0)
	cout<<"tien co menh gia 5000 co "<<t5000<<" to "<<endl;
	if(t2000!=0)
	cout<<"tien co menh gia 2000 co "<<t2000<<" to "<<endl;
	if(t1000!=0)
	cout<<"tien co menh gia 1000 co "<<t1000<<" to "<<endl;

}


