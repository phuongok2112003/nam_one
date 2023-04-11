
#include <iostream>

using namespace std;

float *tamgiactren(float a[][10],float b[],int n){
    float *y= new float[n];
    y[0]=b[0];
   
    for(int i=1;i<n;i++){
       float tong=0;
        for(int j=0;j<i;j++){
          tong+=a[i][j]*y[j];//tính tổng các số không chứa phần tử không chứa cái y[i]// giải xuôi từ trên xuống của hệ phương trình A*y=b
    } 
  
  
         y[i]=b[i]-tong;

     
 }
   

    return y;
}
float timnghiem(float a[][10],float b[],int n){
      float mada=0;
       float *x= new float[n];
    for(int k=0;k<n-1;k++){
       
        for(int i=k+1;i<n;i++){
            if(a[k][k]!=0){
               
           //   mada=a[i][k]/a[k][k];
           
                for(int j=k+1;j<n;j++){

             a[i][j]=a[i][j]-(a[i][k]/a[k][k])*a[k][j];
            }   
            }
            else if(a[k][k]==0) {
                cout<<" ket thuc ";
                return -1;
            }
           a[i][k]=a[i][k]/a[k][k];
        }
         
    }
 

// tamgiactren(a,b,n);

// for(int i=0;i<n;i++){
//     cout<<tamgiactren(a,b,n)[i]<<"  ";
// }
x[n-1]=tamgiactren(a,b,n)[n-1]/a[n-1][n-1];
for(int i=n-2;i>=0;i--){
    float tong=0;
    for(int j=n-1;j>=i+1;j--){
        tong+=a[i][j]*x[j];// tính tổng của các phần tử không chứa x[i]// tính ngược từ dưới lên để tìm x[i];
    }
    x[i]=(tamgiactren(a,b,n)[i]-tong)/a[i][i];
}
for(int i=0;i<n;i++){
    cout<<x[i]<<endl;
}
delete []x;
return 0;
}


int main() {
  int n; 
  cout<<"nhap n "; cin>>n; 

float a[10][10],b[10];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     cin>>a[i][j];  
    }
    cin>>b[i];

}

timnghiem(a,b,n);
// cout<<endl;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<a[i][j]<<"  ";
//     }
//     cout<<endl;
// }
    return 0;
}
