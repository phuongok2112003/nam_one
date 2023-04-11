
// #include <map>
// #include <set>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

//     int q;
//     cin>>q;
//     while (q--) {
        
//     int n,k;
//    map<int,multiset<int>>d;
//     cin>>n>>k;
//     int a[n];
//     for(int &x:a) cin>>x;
//     for(int i=0;i<k;i++){
//         d.insert(q,a[i]);
    
//     }
    
//     for(int i=k;i<n;i++){
//         cout<<*(d[q].second).rbegin()<<" ";
//         d.erase(d.find(a[i-k]));
//       d.insert(i,a[i]);
//     }
 
//     }
// }
#include <cmath>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
   
    // int b[10][10]; 
    int **b=new int *[q];
    // int tp[10];
    int *tp=new int;
    b=new int*[q];
    for(int i=0;i<q;i++){
       *(b+i)=new int;
    }
    int m=0;
    while (m<q) {                                         
       tp[m]=0; 
    int n,k;
    multiset<int>d;
    cin>>n>>k;

    // tp[m]=n;
        int a[n]; 
    for(int &x:a) cin>>x;
    for(int i=0;i<k;i++){
        d.insert(a[i]);
        
    }
    int j=0;
    for(int i=k;i<n;i++){
        b[m][j]=*d.rbegin();
        j++;
        d.erase(d.find(a[i-k]));
        d.insert(a[i]);
          tp[m]++;
    }
  b[m][j]=*d.rbegin();
   tp[m]++;
  m++;
    }
   
  
for(int i=0;i<m;i++){
    for(int j=0;j<tp[i];j++){
    cout<<b[i][j]<<" ";}
    cout<<endl;
}

   
    for(int i=0;i<10;i++){
        delete[] b[i];
    }
    delete[] b;
    delete[] tp;
}
// 2
// 5 2
// 3 4 6 4 5
// 7 3
// 2 3 5 4 8 6 9