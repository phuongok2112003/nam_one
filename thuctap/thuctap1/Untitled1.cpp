#include<iostream>
using namespace std;



int main(){ 
  int n; int sodao = 0;
   cout<<"Nhap so can kiem tra " ;
	cin>>n; 

    int a=n; 
    while (n > 0) {// dau tien gan so dao =0 ,sau so ta tim hang don vi cua so ta nhap vao bang cach chia lay du sau do don vi  nhan voi muuoi sau khi nhan voi muoi ta chi so lúc dau nhap chia cho muoi tiep tuc nhu tek cho den khi nao hêt so thì thoi  
        sodao = sodao * 10 + n % 10;
        n /= 10;
    }
    
     if(a==sodao){
	
	 cout<<a<<"Day la so so doi xung" <<endl;  }


}


