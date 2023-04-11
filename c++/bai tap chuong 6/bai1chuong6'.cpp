#include <iostream.h>

int main()
{
int i,j,s=0,k=0,m,n;
   float tb; 
	cout<<"nhap hang " ; cin>>m;
	cout<<"nhap cot " ;cin>> n;
	int  A[m][n] ;
for(int i=0;i<m;i++)
for (int j=0;j<n;j++)
{
	cout<<"a["<<i<<"]["<<j<<"]= " ;
cin>>A[i][j];
}


for(i=0;i<m;i++)
for( j=0;j<n;j++)
{if (A[i][j]<0){
	  			s+=A[i][j];
				  k++; 
				   
	  		} 
		  } 
  	
    tb= float(s)/float(k) ;
	   cout<<"trung binh cac so am "<< tb ; 
int max=A[0][0];
	   for ( i=0 ;i<m;i++)
       for (   j=0 ;j<n ;j++){
		  	if (A[i][j]>=max){
	  			max=A[i][j] ;
				   
	  		} 
		  } 
  	 
	  cout<<"\nso lon nhat trong mang la: "<<max<< endl; 
	  
return 0;
}