#include <iostream>
#include <iomanip>
using namespace std; 

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG[], int&);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Xuat(DUONGTHANG[], int);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(DUONGTHANG& l)
{
	cout << "\nNhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Xuat(DUONGTHANG l)
{
	cout << "\n(" << l.a << ")x + (" << l.b << ")y + (" << l.c << ") = 0" << endl;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang " << i + 1;
		Xuat(a[i]);
	}
}