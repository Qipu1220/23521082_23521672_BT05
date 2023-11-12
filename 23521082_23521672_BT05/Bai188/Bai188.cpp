#include<iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO x);
void Nhap(PHANSO a[], int& n);
PHANSO DuongNhoNhat(PHANSO[], int);
int ktDuong(PHANSO x);
int SoSanh(PHANSO x, PHANSO y);



int main()
{
	PHANSO A[100];
	int n;
	cout << "Nhap Mang Phan so : ";
	Nhap(A, n);
	Xuat( DuongNhoNhat(A, n));
	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO lc = { -1,1 };
		return lc;
	}
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (ktDuong(a[n - 1]) == 0)
		return lc;
	if (ktDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == -1)
		lc = a[n - 1];
	return lc;
}



