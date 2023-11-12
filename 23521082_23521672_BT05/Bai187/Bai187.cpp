#include <iostream>
using namespace std;

struct PhanSo
{
	float tu;
	float mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO[], int&);
void Nhap(PHANSO a);
PHANSO DuongDau(PHANSO[], int);

void Nhap(PHANSO a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

bool ktDuong(PHANSO a)
{
	if (a.tu > 0)
		if (a.mau > 0)
			return true;
		else
			if (a.tu < 0)
				if (a.mau < 0)
					return true;
	return false;
}

PHANSO DuongDau(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDuong(a[i]))
			return a[i];
	PHANSO lc = { 0,1 };
	return lc;
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


int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	cout << "Duong dau: " << DuongDau(a, n).tu << "/" << DuongDau(a, n).mau;
	return 0;
}