#include <iostream>
using namespace std;
#define hang 3
#define cot 3 
int main()
{int mt[hang][cot] = { {1,2,3},{4,5,6},{9,8,8} };
int i,j;
for (i=0; i<hang; i++) 
{ for (j=0; j<cot; j++)
cout<< mt[i][j]<<'\t'; 
cout<<endl;
}
cout<<"sau khi bien doi"<<endl;
for (i=0; i<hang; i++) 
{
for (j=0; j<cot; j++)
{
*(*(mt+i)+j)=*(*(mt+i)+j) +10;
cout<<*(*(mt+i)+j)<<'\t';
}
cout<<endl;
}
}


