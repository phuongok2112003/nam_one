#include <iostream>
using namespace std;
void xuLy(int A[][200], int n){
A[n][n] = 0;
for(int i = n + 1; i <= n*2 ; i++){
A[i][n] = A[i-1][n] + 1;
}
for(int i = n - 1; i >= 0 ; i--){
A[i][n] = A[i+1][n] + 1;
}
for(int i = n; i <= n ; i++){
for(int j = n + 1; j <= n * 2; j++){
A[i][j] = A[i][j-1] + 1;
}
for(int j = n - 1; j >= 0; j--){
A[i][j] = A[i][j+1] + 1;
}
}
for(int i = n + 1; i <= n*2 ; i++){
for(int j = n - 1; j >= 0; j--){
A[i][j] = A[i-1][j+1] + 1;
}
for(int j = n + 1; j <= n * 2; j++){
A[i][j] = A[i-1][j-1] + 1;
}
}
for(int i = n - 1; i >= 0 ; i--){
for(int j = n + 1; j <= n * 2; j++){
A[i][j] = A[i+1][j-1] + 1;
}
for(int j = n - 1; j >= 0; j--){
A[i][j] = A[i+1][j+1] + 1;
}
}
}
void xuatMang(int A[][200], int n){
for(int i = 0 ; i <= n*2; i++){
for(int j = 0 ; j <= n*2 ; j++){
cout << A[i][j] << " ";
}
cout << endl;
}
}
main() {
int A[200][200], n;

cin >> n;
xuLy(A,n);
xuatMang(A,n);
}