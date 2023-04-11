#include<iostream>
using namespace std;
int tong (int n) {
    if (n == 1) return 1;
    return tong(n - 1) + n;
}
int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cua day so la: " << tong(n)<<endl;
    
    return 0;
}
