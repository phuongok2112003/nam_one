#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
void gotoxy( int column, int line ){
	COORD coord;
  	coord.X = column;
  	coord.Y = line;
  	SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}   
void doctep(ifstream &v,int n,int r){
	string hang;
	for(int i=0;i<r;i++){
		cout<<"\n";}
	for(int i=0;i<30;i++){
		getline(v,hang);
		if(n==1)
		cout<<" "<<hang<<endl;
		if(n==2)
		cout<<"\t\t\t\t\t"<<hang<<endl;
		if(n==3)
		cout<<"\t\t\t\t\t\t\t\t\t"<<hang<<endl;
		if(n==4)
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<hang<<endl;
	}
}   
void phaohoa(int n,int r){
	ifstream file1("6.txt", ios_base::in);
	doctep(file1,n,r);
	file1.close();_sleep(100);gotoxy(0,0);
	ifstream file2("5.txt", ios_base::in);
	doctep(file2,n,r);
	file2.close();_sleep(100);gotoxy(0,0);
	ifstream file3("4.txt", ios_base::in);
	doctep(file3,n,r);
	file3.close();_sleep(100);gotoxy(0,0);
	ifstream file4("3.txt", ios_base::in);
	doctep(file4,n,r);
	file4.close();_sleep(100);gotoxy(0,0);
	ifstream file5("2.txt", ios_base::in);
	doctep(file5,n,r);
	file5.close();_sleep(100);gotoxy(0,0);
	ifstream file6("1.txt", ios_base::in);
	doctep(file6,n,r);
	file6.close();_sleep(100);gotoxy(0,0);
	ifstream file("2022.txt", ios_base::in);
	doctep(file,n,r);
	file.close();_sleep(200);		
}   
int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"\n\n\t\t\t\t\t\tLOADING ";
	SetConsoleTextAttribute(hConsole, 204);	
	for(int i=0;i<50;i++){
		cout<<"   ";
		_sleep(100);}
	SetConsoleTextAttribute(hConsole, 12);
	for(int i=70;i>17;i--){
		gotoxy(50+i/2+i/2,i);
		cout<<"*";
		if(i<25)
		cout<<"**";_sleep(50);}
		system("cls");
	system("Color 04");_sleep(150);
	phaohoa(1,2);
	system("Color 06");_sleep(150);
	system("Color 03");_sleep(150);
		system("cls");
	system("Color 06");_sleep(50);
	phaohoa(3,9);
		system("cls");
	system("Color 05");_sleep(50);
	phaohoa(2,20);
		system("cls");
	system("Color 09");_sleep(50);
	phaohoa(4,15);
		system("cls");
	system("Color 02");_sleep(150);
	phaohoa(3,7);
	system("Color 06");_sleep(50);
		system("cls");
	system("Color 08");_sleep(50);
	phaohoa(2,17);
	system("Color 07");_sleep(150);
		system("cls");
	system("Color 03");_sleep(50);
	phaohoa(3,9);
		system("cls");
	system("Color 06");_sleep(50);
	phaohoa(4,27);
	system("Color 04");_sleep(150);
	
	_sleep(500);
	system("cls");
	for(int i=70;i>17;i--){
		gotoxy(70+i/2+i/2,i);
		cout<<"*";
		if(i<25)
		cout<<"**";_sleep(50);}
		system("cls");
	phaohoa(3,2);
	ifstream file("hp.txt", ios_base::in);
	doctep(file,2,2);
	file.close();
	for(;;){
		system("Color 01");_sleep(150);
		system("Color 02");_sleep(150);
		system("Color 03");_sleep(150);
		system("Color 04");_sleep(150);
		system("Color 05");_sleep(150);
		system("Color 06");_sleep(150);
		system("Color 07");_sleep(150);
		system("Color 08");_sleep(150);
		system("Color 09");_sleep(150);
	}gotoxy(0,42);
}
