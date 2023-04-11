
#include<iostream>
#include<string.h>
using namespace std ; 
main()
{  
    char s[30] , a[30 ];
    cout<<"moi ban nhap 1 xau s ";
    cin.getline(s,30);
    cout<<"moi ban nnhap vao 1 xau moi de kiem tra ";
    cin.getline(a,30);
     if(strstr(s,a) != NULL )
     {
         cout<<"tim thay ";
     }else cout<<"khong tim thay ";
    return 0 ;
}


