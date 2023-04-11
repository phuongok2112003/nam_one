#include <iostream.h>
int main()
{
	float toan,li,hoa,diem_tb ;
	cout<<"nhap toan:";
	cin >> toan;
	cout << "nhap li:";
	cin >> li;
	cout <<"nhap hoa:" ;
	cin >> hoa;
	 diem_tb =(toan+li+hoa)/3; 
	 cout<<"diem trung binh:"<< diem_tb; 
	 if (diem_tb >=9 )
	  cout<<"\nhoc sinh xep loai xuat sac" << endl;
	  else if( diem_tb <9 && diem_tb >=8)
	   cout<<"\nhoc sinh xep loai gioi "<<endl;
	    else if (diem_tb <8&&diem_tb >=6.5)
		 cout<<"\nhoc sinh xep loai kha " <<endl;
		  else if (diem_tb <6.5&&diem_tb >=5)
		 cout<<"\nhoc sinh xep loai trung binh " <<endl;
		 else  
		 cout <<"\nhoc sinh  xep loai yeu " << endl; 
	
	return 0; 
}
