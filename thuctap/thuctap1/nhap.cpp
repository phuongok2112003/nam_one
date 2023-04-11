#include<iostream>
using namespace std;
 
 kttamgiac(int a,int b,int c) {
 	if(a+b>c||a+c>b||b+c>a) cout<<" day la ba canh cua tam giac " <<endl;
 	else cout<<"day khong la tam giac " <<endl;
 }
ktsonguyento(int x){int s=0;
for(int i=1;i<=x/2;i++)  
	if(x%i==0) s+=1; 
	if(s==1) return true;
	else return false ; 
} 
ktsodoixung(int x) {int sodao =0;
   

    int a=x; 
    while (x > 0) {
        sodao = sodao * 10 + x % 10;
        x /= 10;
    }
    
     if(a==sodao) return true;
	 else return false ; 
	
	 
}
int main(){
 int a,b,c,n ,bai;
 

 
  
 
 do{cout<<"\nnhap bai bn muon lam "; cin>>bai; 
 switch (bai) {case 1: {
 cout<<"mhap a " ; cin>>a; 
 cout<<"mhap b " ; cin>>b; 
 cout<<"mhap c " ; cin>>c; 
 kttamgiac(a,b,c) ;
 //break; 
 } 
 case 2:{
 cout<<"nhap n "; cin>>n; 
 cout<<"cac so nguyen to trong pham vi n la "; 
 for(int i=0;i<=n;i++) 
 {if(ktsonguyento(i)) cout<<i<<"  " ;
 
 }	break;
 }
 case 3: {
 cout<<"nhap n "; cin>>n; 
 cout<<"\ntap hop so doi xung trong pham vi n la " ;
 for(int i=0;i<=n;i++) {
 if(ktsodoixung(i)) cout<<i<<"  ";
 }
 	break;
 }
 } 
 }while (bai==1||bai==2||bai==3) ;


}




