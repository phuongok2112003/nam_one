#include <iostream>
 
using namespace std;
 
#define MAX 256
#define ce cout << '\n'
void nhap(int &n, char*str[10]){

    for (int i = 0; i < n; ++i)
    {
        cout << "Nhap ten nguoi dung " << i + 1 << ": ";
        cin.getline(*(str + i), MAX);
    }
}
 
int main()
{
    int n, m;
    cout << "Nhap so ten nguoi dung: ";
    cin >> n;
    cin.ignore();
    char *str[10];
  // str = new char*[n];
    for (int i = 0; i < n; ++i)
    {
        *(str + i) = new char[MAX];
    }
    ce;
   nhap(n,str);
    ce;
    cout << "In ra vi tri  ten nguoi dung : ";
    cin >> m;
    cout << "Ten: " << *(str + m - 1);
    for (int i = 0; i < n; ++i)
    {
        delete[] *(str + i);
    }
   // delete[] str;
    ce;
    return 0;
}
// int main (){


//     int b,n;
//     int *p;
//     // p=&b;
//     string a[50];
//     string *q=a;
//     cout<<" nhap so nguoi can thuc hien:"; cin>>*p;
//     for (int i=0;i<*p;i++){

  
//         cout<<" ten nguoi thu "<<i+1<<"la:";
//          cin>>* (q+i);  }
//     cout<<" nhap vi tri can tim:"; cin>>n;
//     cout<<" ten nguoiovi tri";
//     for(int i=0; i<*p;i++){

//          if (n==i+1) cout<<* (q+i);  }
//          return 0;}