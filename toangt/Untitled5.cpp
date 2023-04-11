#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {

 int  a,b,c; 
	cout<<"nhap a: " ; cin>>a;
	cout<<"nhap b: " ; cin>>b;
	cout<<"nhap c: " ; cin>>c;
	cout<<gcd( a,  b);
cout<<	"ket qua  bai 4 tim duoc la "<<gcd (gcd( a,  b) ,c) ;
 

}  
