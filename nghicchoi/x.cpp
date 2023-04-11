//#include <bits/stdc++.h>
#include <iostream>
#include<fstream>
#include "windows.h"
using namespace std ;

int main() {
  
  //  freopen("output.txt","w",stdout);


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 
//string s1;
//  freopen("input.txt","r",stdin);
//  int i=0;
//
//  while(getline(cin,s1,'-')){
//  SetConsoleTextAttribute(hConsole, i+10);
//  
//   for(int j=0;j<s1.length();){
//    if(s1[j]==' '&&s1[j+1]==' '){
//      cout<<s1[j];
//           j++;
//    } 
//    else {
//    Sleep(10);
//    cout<<s1[j];
//    j++;
//    }
//    }
//    i++;
//    
//  }
//   freopen("input.txt","r",stdin);
// string s1;

//  int i=0;
// string s;
//   while(getline(cin,s,'-')){
//   SetConsoleTextAttribute(hConsole, i+10);
  
//    for(int j=0;j<s.length();){
//     if(s[j]==' '&&s[j+1]==' '){
//       cout<<s[j];
//            j++;
//     } 
//     else {
//     Sleep(100);
//     cout<<s[j];
//     j++;
//     }
//     }
//     i++;
    
//   }

// system("cls");


//  freopen("input.txt","r",stdin);
ifstream f("input.txt");
ifstream f1("output.txt");
 int i=0;
string s,s1;
// while(1){
//   if(i<16){
//  getline(f,s,'-');
//   SetConsoleTextAttribute(hConsole, i);
  
//    cout<<s;
//    Sleep(100);
  
//      i++;
//    }
  
    
//   if(i==16)
//    i=0;
//   }}
 
getline(f,s,'-');
getline(f1,s1,'-');
while(1){
   SetConsoleTextAttribute(hConsole, i);
  cout<<s<<endl;
  
  Sleep(150);
  system("cls");
   
  cout<<s1<<endl;
   Sleep(150);
  system("cls");
  i++;
  if(i==16)i=0;
}
f.close();
f1.close();
}
// #include <iostream>
// #include <string>
// #include <io.h>
// #include <fcntl.h>
// using namespace std;

// int main()
// {
//     _setmode(_fileno(stdin), _O_U16TEXT);
//     _setmode(_fileno(stdout), _O_U16TEXT);
//     wcout << L"Tiếng Việt có dấu" << endl;
//     wstring test;
//     wcout << L"Hãy nhập vào một chuỗi ký tự:" << endl;
//     // wcin >> 
//     getline(wcin, test);
//     wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << endl;
//     wcout << test; 
//     return 0;
// }
