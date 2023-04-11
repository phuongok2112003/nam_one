#include <iostream>
using namespace std;
#define max 5

 

 int main()
{
int *A=new int[max];


for(int i=0;i<max;i++)
{
    cout<<"nhap phan tu thu "<<i<<" la ";
    cin>>*(A+i);}
int Max=*A;
for(int i=1;i<max;i++)
{if(Max<*(A+i))
Max=*(A+i);

}
cout<<"gia tri lon nhat cua mang la "<<Max;
delete[] A;

}

