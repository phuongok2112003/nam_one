
#include<iostream>

using namespace std;

int main()
{
   int n;
   
  string  kt= "false";
   cout<<"nhap  n "; cin>>n;
    int a[n];
   for(int i=0;i<n;i++)
{
   cout<<"a["<<i<<"]= "; cin>>a[i];
}
for(int i=0;i<n;i++)
{
   if(a[i]>=a[i+1]){ kt = "true";
   
   }
   else {kt = "false";
break;
   }

   }
 for(int i=0;i<n;i++)
{
   if(a[i]<=a[i+1]){ kt = "true";
   
   }
   else {kt = "false";
break;
   }
   }
 cout<<kt ;
}
