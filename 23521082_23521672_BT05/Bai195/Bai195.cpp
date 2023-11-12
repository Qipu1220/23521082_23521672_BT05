#include <iostream>
#include <cmath>
using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[],int&);
void Xuat(SOPHUC[],int);
void HoanVi(SOPHUC&, SOPHUC&);
void SapTang(SOPHUC[], int);

int main()
{
	SOPHUC a[500];
	int n;

	Nhap(a,n);
	Xuat(a,n);
	SapTang(a, n);
	cout << "\nSap mang tang theo phan thuc: ";
	Xuat(a, n);

	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(a[i]);
	}
}

void HoanVi(SOPHUC& x, SOPHUC& y)
{
	SOPHUC temp = x;
	x = y;
	y = temp;
}

void SapTang(SOPHUC a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].Thuc>a[j].Thuc)
				HoanVi(a[i], a[j]);

		}
}