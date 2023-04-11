 #include <iostream>
 using namespace std; 
 int main()
{
	float    a,b ,c , min , max ; 
	 cout <<" nhap a :";
	 cin >>a;
	 cout << " nhap b :" ;
	  cin>>b;
	cout <<" nhap c " ; cin >> c; 
	min=a;
	max=b;
	if (a>b  )
		min =b ;
	else  if (min >c)
		min =c;
      cout <<" so be nhat la "<< min ;
  if (b<a )
   	max=a ;
   else if  (max <c)
  	 max=c ;
    cout<< " \n so lon nhat la"<< max<< endl ; 

 	
 return 0;
 }
