#include<iostream>
using namespace std;

 class so
 {
 private:
  int x,y;
 public:
   friend istream& operator >>(istream &in,so&xm);
    friend ostream& operator <<(ostream &out, so xm);
 };
 istream& operator >>(istream &in,so&xm){
    in>>xm.x>>xm.y;
   return in;
 }
 ostream& operator <<(ostream &out, so xm){
    out<<xm.x<<"  "<<xm.y<<endl;
      return out;
 }
 class chu
 {
 private:
   string ten;
 public:
 void nhap(){
    getline(cin,ten);
 }
    friend istream& operator>>(istream&in, chu &x){
    x.nhap();
    return in;
    }
    friend ostream& operator <<(ostream&out, chu x){
     out<<x.ten<<endl;
     return out;
    }

 };

 
typedef  class so So;

 typedef  chu Chu;
int main()

{

// int i=0;
// while(cin>>x[i]){
//     i++;
// }
int n; cin>>n;
// So x[n];
So a[n];
So *x=a;

for(int i=0;i<n;i++){
    cin>>a[i];
}

cin.ignore();
// Chu name;
// cin>>name;
// cout<<name;
for(int j=0;j<n;j++){
    cout<<x[j];
}

delete x;
 
 
}

