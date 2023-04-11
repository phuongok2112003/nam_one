#include<iostream>
#include<string.h>
using namespace std;
#define max 30

int main(){
    int n , i, count = 0 ;
    cout<<"Nhap so nguoi:";cin>>n;
    char ds[n][max];
    char *ptr[n];
     cout<<"Nhap danh sach ten : "<<endl;
     cin.ignore();
    while(count<n){
        cout<<"Nhap  ten thu "<<count+1<<": ";
        cin.getline(ds[count], 30);
        ptr[count] = ds[count];
        count++;
    }
    int m ;
    cout<<"Nhap stt can tra ten : ";cin>>m;
  
    cout<<"Ten: "<<ptr[m-1]<<endl;
    return 0;
    

}