#include <iostream>
using namespace std; 
int  main()
{
 int i=2, n,j ; bool kt; 
 cout<<"nhap n:";
 cin >>n ;
 cout<<"cac so nguyen to tu 1 den "<<n <<" la :";
 for  (;i <= n;) {
        kt =  true ;
        
             j=2; 
            while(j <= i/2) {
                if(i%j == 0) 
                    kt = false ;
                    
                   
                
                j=j+1; 
            }
        
 
        if(kt == true) {
            cout << i << " ";
        }
          
       i=i+1;
    }
    return 0;
}
