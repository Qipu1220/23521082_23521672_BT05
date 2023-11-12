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
DATHUC operator*(DATHUC, DATHUC);

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

	cout << "\nTich 2 da thuc: ";
	Xuat(operator*(a,b));

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

DATHUC operator*(DATHUC f1, DATHUC f2)
{
	DATHUC temp = { 0,0 };
	for (int i = f1.n; i >= 0; i--)
		for (int j = f2.n; j >= 0; j--)
		{
			temp.a[i + j] = temp.a[i + j] + f1.a[i] * f2.a[j];
		}
	temp.n = f1.n + f2.n;
	return temp;
}