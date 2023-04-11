//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;


int main(){
char s[30];
int cnt[256]={};
 
 cout<<"nhap xau s la "; 
 
 cin.getline(s,30); 
 for(int i=0;i<strlen(s);i++)
 cnt[s[i]]++;
 for(int i=0;i<strlen(s);i++){
     if(cnt[s[i]]){


     cout<<s[i]<<" xuat hien "<<cnt[s[i]]<<" lan "<<endl;
      cnt[s[i]]=0;
 }     }




}