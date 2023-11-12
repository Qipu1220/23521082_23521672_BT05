#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[], int);

int main()
{
	PHANSO a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nPhan so lon nhat: ";
	Xuat(LonNhat(a, n));
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nx: " << x.Tu;
	cout << "\ny: " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(a[i]);
	}
}

int SoSanh(PHANSO x, PHANSO y)
{
	if (x.Tu * y.Mau > y.Tu * x.Mau)
		return 1;
	return 0;
}

PHANSO LonNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], lc) == 1)
			lc = a[i];
	return lc;
}