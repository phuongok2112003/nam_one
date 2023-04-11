#include <iostream>
using namespace std;
class Diem{
private:
	int n,t,y;
public:
	void nhap();
	void xuat();
};
class hs{
private:
	char ten[30];
	int tuoi;
	float diem;
	Diem ds;
public:
	void nhap();
	void xuat();
	friend class Diem;
	void friend xs(hs *a,int n);
};
void Diem::nhap(){
cout<<"Nhap ngay: ";cin>>n;
	cout<<"Nhap thang: ";cin>>t;
	cout<<"Nhap nam: ";cin>>y;
};
void Diem::xuat(){
cout<<n<<"/"<<t<<"/"<<y<<endl;
};
void hs::nhap(){
	cin.ignore();
cout<<"Nhap ten: ";
	cin.getline(ten,30);
cout<<"Nhap tuoi: ";
	cin>>tuoi;
cout<<"Nhap diem: ";
	cin>>diem;
cout<<"Nhap ngay thang nam: "<<endl;
	ds.nhap();
};

void hs::xuat(){
cout<<"Ten: "<<ten<<endl;
cout<<"Tuoi: "<<tuoi<<endl;
cout<<"Diem: "<<endl;
	cout<<"Ngay thanh nam: "<<endl;
	ds.xuat();
	
};
void xs(hs *a , int n){
	for(int i=0 ; i<n ; i++){
		for(int j=i+1;j<n;j++)
		{
			if(a[i].tuoi>a[j].tuoi
			)
			{
				hs tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
		a[i].xuat();
		}
};
int main(){
	int n;
	cout<<"Nhap so hoc sinh: ";cin>>n;
	hs a[n];
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
		
	}
	cout<<"DS Xs Diem: "<<endl;
	xs(a,n);
	return 0;	
}
