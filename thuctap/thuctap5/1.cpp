#include<iostream>
using namespace std;
 
main(){
 int num;
char ch = 'A';
float x;
int *ptr_num = NULL;
char *ptr_ch = NULL;
float *ptr_x= NULL;

ptr_num =&num;
ptr_ch = &ch;;

ptr_x = &x;
*ptr_x = 0.25;
*ptr_num=*ptr_ch;

cout<<"dia chi cua *ptr_num la "<<ptr_num<<" gia tri cua *ptr_num  la "<<*ptr_num <<endl;
cout<<"dia chi cua *ptr_ch la "<< ptr_ch<<" gia tri cua  *ptr_ch  la "<< *ptr_ch  <<endl;
cout<<"dia chi cua *ptr_x la "<<ptr_x<<" gia tri cua  *ptr_x  la "<<*ptr_x <<endl;
cout<<"dia chi cua *ptr_num la "<<&num;

}