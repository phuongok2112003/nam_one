# include<iostream.h>
int main()
{
	int p,q,i,min,max ,j ;
	cout<<"nhap so p ";cin>>p;
	cout<<"nhap so q " ; cin>>q;

		if ( q>p ) {		
		
		min =p; max=q; }
		else{
			
		 min=q;max=p; }
		i=min; j=max; 
	while (i<=min){
		if(q%i==0&&p%i==0) {
			cout<<"ucln la " <<i<< endl; break; 
		}
	
	
		i=i-1; 
  
	}	
	while (j>=max){
		if(j%q==0&&j%p==0) {
			cout<<"bcnn la " <<j << endl; break; 
		}
	
	
		j=j+1 ;
  
	}	
	 
 return 0; 
} 