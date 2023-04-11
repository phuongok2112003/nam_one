#include<iostream.h>
main()
 { 
int m,i=0,j=0,s=0 ,k=0;

cout<<"nhap hang va cot  " ; cin>>m;
int  a[m][m] ;	

for( int i=0;i<m ;i++){
for ( int j=0 ;j<m;j++) {     
cout<<"a["<<i<<"]["<<j<<"]= " ;
cin>>a[i][j] ;}}
for(i=0;i<m;i++){
		 
		s=s+a[i][i] ;
	}

cout<<"\ntong cac phan tu tren duong cheo chinh :" <<s; 
for( int i=0;i<m ;i++){
    
    k= k+a[i][m-i-1];
    
}
	cout<<"\ntong cac phan tu tren duong cheo phu la :" <<k<< endl;
	
} 