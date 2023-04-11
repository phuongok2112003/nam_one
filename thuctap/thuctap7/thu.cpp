
#include <iostream>
#include<string.h>
using namespace std;

 typedef struct  {
  char *p=new char;
//char p[10];
  int diem;
  
} sp ;
int main() {
//  sp*x=new sp[2] ;
//  for(int i=0;i<2;i++){
   
//  cout<<"so "<<i+1<<"  ";cin.getline((x+i)->p,10);
     
//     cout<<"\nnhap diem "; 
//      cin>>(x+i)->diem;
//      cin.ignore();
    
//  }
//   for(int i=0;i<2;i++){
   
//  cout<<"so "<<i+1<<"  ";cout<<(x+i)->p;
     
//     cout<<"\nnhap diem "; 
//      cout<<(x+i)->diem;

    
//  }
char *x=new char[1];
for(int i=0;i<5;i++)x[i]='c';
int i=0;
while((x+i)!=NULL){cout<<*(x+i)<<"  ";i++;}

 delete[] x;
 x=NULL;
 cout<<"\nthay doi";
 int j=0;
 while((x+j)!=NULL){cout<<*(x+j)<<"  ";j++;}
 cout<<"hdfu";
    return 0;
}