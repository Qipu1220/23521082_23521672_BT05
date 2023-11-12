#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC Tong(DATHUC, DATHUC);

int main()
{
	DATHUC a;
	DATHUC b;

	Nhap(a);
	cout << "Da thuc a: ";
	Xuat(a);

	Nhap(b);
	cout << "Da thuc b: ";
	Xuat(b);

	cout << "\nTong 2 da thuc: ";
	Xuat(Tong(a, b));

	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
	cout << f.a[0];
}

DATHUC Tong(DATHUC f1, DATHUC f2)
{
	DATHUC temp=f2;
	if (f1.n > f2.n)
	{
		for (int i = f1.n; i > f2.n; i--)
			temp.a[i] = f1.a[i];
		for (int i = f2.n; i >= 0; i--)
			temp.a[i] = f1.a[i] + f2.a[i];
	}
	if (f1.n == f2.n)
	{
		for (int i = f2.n; i >= 0; i--)
			temp.a[i] = f1.a[i] + f2.a[i];
	}
	if (f1.n < f2.n)
	{
		for (int i = f1.n; i >= 0; i--)
			temp.a[i] = f1.a[i] + f2.a[i];
	}
	return temp;
}