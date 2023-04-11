#include <iostream>
#include<string.h> 
using namespace std;

//xoamangtai(char  a[],int &n,int  vitrixoa) { 
//for(int i=vitrixoa;i<n;i++){	
// 
//
// 	a[i]=a[i+1];
//	 
// 
// 	
// }n--; 
// 
// return n; }

int main() {
	int i=0; 

   char a[100] ;
  // cout<<"nhahp "; 
    cin.getline(a, 100); 
	int dem=0; 
    for (int i=0;i<strlen(a);i++) dem++; 

 
	for(int i=0;i<dem;) {
		if(a[i]==' ' and a[i+1]==' ') {
			for(int vt=i;vt<dem;vt++) 
				a[vt]=a[vt+1];
				dem--; 
		
		 
		
		}
		else i++; 
	
	}

//	while(i<dem) {
//	if(a[i]==' ' and a[i+1]==' ') 
//	xoamangtai(a,dem,i) ;
//	  else i++; 
//	}

cout<<'\n'<<a; 

}
