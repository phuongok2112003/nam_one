#include <iostream>
using namespace std;
#define max 3
// int main()
// {
//     int a[3]={1,2,3};
//     int *ptra[3];
//     *ptra=a;

//     for(int i=0;i<3;i++)
//     cout<<ptra[0][i]<<"  ";
// }

int main()
{
    int A[max] = {3, 7, 9};
    int *p[max];
    for (int i = 0; i < max; i++)
        p[i] = &A[i];
    cout << " tro cua con tro:" << endl;
    for (int i = 0; i < max; i++)
        cout << *(*(p + i)) << "\t";
    cout << endl;
    cout << " in ra noi dung con tro mang:" << endl;
    for (int i = 0; i < max; i++)
        cout << *p[i] << "\t";
}