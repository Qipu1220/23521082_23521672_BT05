#include <iostream>
#include<cmath>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);
int ktTrungNhau(DUONGTHANG, DUONGTHANG);
int ktCapTrungNhau(DUONGTHANG[], int);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	if (ktCapTrungNhau(a, n) == 1)
		cout << "\nCo cap trung nhau";
	else
		cout << "\nKhong co cap trung nhau";

	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(a[i]);
	}
}

int ktTrungNhau(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}

int ktCapTrungNhau(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (ktTrungNhau(a[i], a[j]))
				flag = 1;
	return flag;
}