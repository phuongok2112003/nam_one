 #include<iostream>
using namespace std;

 
void Nhap_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu thu " << i << ": ";
		cin >> a[i];
	}
}


void Xuat_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

 void Xapxep(int a[],int n ){
    int i, j, min, temp;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++){
            if (a[j] < a[min]) min = j;
        }
        swap(a[i], a[min]);
    }
}
    
void Xu_Li(int a[], int b[], int c[], int n, int m, int &k)
{
	int i = 0; 
	int j = 0; cout<<k<<"hi"<<endl;
	// while((i < n) && (j < m))
	// {
	// 	if(a[i] < b[j])
	// 	{
	// 		c[k] = a[i];
	// 		k++;
	// 		i++; 
	// 	}
	// 	else 
	// 	{
	// 		c[k] = b[j];
	// 		k++; 
	// 		j++; 
	// 	}
	// }
   // cout<<i<<"hi "<<j<<endl;
	// // duyệt vòng lặp mảng a để bỏ hết các phần tử còn lại 
	for(; i < n; i++)
	{
		c[k] = a[i];
		k++;
	}
	// duyệt vòng lặp mảng b để bỏ hết các phần tử còn lại 
  // k=i;
  cout<<k;
	for(; j < m; j++)
	{
		c[k] = b[j];
		k++;
	}
    Xapxep(c, k );
	cout << "\n\n\t\t MANG C SAU KHI TRON 2 MANG A VA B\n";
	Xuat_Mang(c, k);
}


int main()
{
	int a[100];
	int b[100];
	int c[200];
	int n; // số lượng phần tử mảng a
	int m; // số lượng phần tử mảng b
	int k = 0;// số lượng phần tử mảng c

	// nhập số lượng phần tử mảng a
	do
	{
		cout << "\nNhap so luong phan tu mang a: ";
		cin >> n;
		if(n <= 0 || n > 100)
		{
			cout << "\nSo luong phan tu khong hop le. Xin kiem tra lai";
		}
	}while(n <= 0 || n > 100);

	cout << "\n\n\t\t NHAP MANG A\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\t MANG A\n";
	Xuat_Mang(a, n);

	// nhập số lượng phần tử mảng b
	do
	{
		cout << "\nNhap so luong phan tu mang b: ";
		cin >> m;
		if(m <= 0 || m > 100)
		{
			cout << "\nSo luong phan tu khong hop le. Xin kiem tra lai";
		}
	}while(m <= 0 || m > 100);
	cout << "\n\n\t\t NHAP MANG B\n";
	Nhap_Mang(b, m);
	cout << "\n\n\t\t MANG B\n";
	Xuat_Mang(b, m);

	// gọi hàm xử lí
	Xu_Li(a, b, c, n , m, k);
	
  


}
