#include <iostream.h>
# include <math.h> 
 main () 
{ 
  int n, s = 0, j = 0,x;
  cout << "nhap n:"; cin >> n;
  int tg, i = 0, k, a [n];  
	 
	for (i = 0; i <n; i ++) {
		cout << "a [" << i << "] =";
		cin >> a [i];
	} 
	 int max =a[0]; 
	for (i = 1; i <n; i ++) {
		if (a [i]>= max )  
		max= a[i]; 
		 
	}
	cout << "so lơn nhat trong mang la :"<<max ;
		for (i = 0; i <n; i ++) {
		if (a [i]==max )  
		cout<<"\nso lon nhat o vi tri " <<i; 
		 
	}
	i=0; 
	 while ( i<n) {
 		s=0;
    	j=1;
    while (j<=a[i]/2) {
     if ( a[i]%j ==0)
	 {
 	s=s+j;}
	 j++;	
 	 
    }
			if (s==a[i]) {
		  cout<<"\ncac so hoan hao trong mang la "<<a[i];
		  } 
		  i++; 
		 }
      
		for (i = 0; i <n; i ++) {
		x=int ( sqrt(a[i]));
		if (x*x==a[i])
		cout<<"\ncac so chinh phuong lan luot la :" << a[i]<< endl ;
	} 	
}