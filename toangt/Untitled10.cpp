#include<iostream>
#include<math.h> 
using namespace std;

int x(int n){
	if(n==0)
		return 1;
	else{
		int s=0;
		for(int i=1;i<=n;i++)
			s=s+pow(i,2)*x(n-i);
		return s;
	}
}
main(){
	int n;
	do{
			cout<<"nhap n: ";cin>>n;	
	}while(n<=0);
	cout<<"x="<<x(n)<<endl;
}

