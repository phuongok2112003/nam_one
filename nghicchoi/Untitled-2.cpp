
#include <iostream>
#include<iomanip>
using namespace std;

void giai(float a[][10],float b[],int n){
    float *x=new float[n];
    x[n-1]=b[n-1]/a[n-1][n-1];
    for(int i=n-2;i>=0;i--){
        float tong=0;
        for(int j=n-1;j>=i+1;j--){
           tong+=a[i][j]*x[j];
        }
        x[i]=(b[i]-tong)/a[i][i];
    }




    cout<<"nghiem cua he la "<<endl;
    for(int i=0;i<n;i++){
        cout<<"x"<<i+1<<"= "<<x[i]<<endl;
    }
    delete[]x;
}
float khu(float a[][10],float b[],int n){
    for(int k=0;k<n-1;k++){
      
    for(int i=k+1;i<n;i++){
        
            if(a[k][k]!=0){
               for(int j=k+1;j<n;j++){
                   a[i][j]=a[i][j]-(a[i][k]/a[k][k])*a[k][j];
                 
            }
        }

          b[i]=b[i]-(a[i][k]/a[k][k])*b[k];
     
         a[i][k]=0;
    }
}
giai(a,b,n);
}
    
int main(){
    float a[10][10],b[10];
    int n;
    cout<<"nhap n "; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        cin>>b[i];
    }
    khu(a,b,n);
 

}















//tim khoảng chưa hai sô nhân nhau
// void timkhoang(int a[],int b[],int n,int q){
  
//     for(int k=0;k<q;k++){
//           int dem=0;
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++)
//             if(a[i]*a[j]==b[k]){
//                   dem++;
//             }
//         }
//         cout<<dem<<endl;
//     }
// }

// int main() {
//   int n,q; 
//   cout<<"nhap n "; cin>>n; 
//    cout<<"nhap so yeu cau "; cin>>q;
// int a[10],b[10];
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// for(int j=0;j<q;j++){
//     cin>>b[j];
// }
// timkhoang(a,b,n,q);


 
// }