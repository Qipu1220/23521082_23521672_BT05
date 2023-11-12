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
DATHUC DaoHam(DATHUC);

int main()
{
	DATHUC a;
	DATHUC b;

	Nhap(a);
	cout << "Da thuc a: ";
	Xuat(a);

	cout << "\nDao ham cap 1: ";
	Xuat(DaoHam(a));

	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
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

DATHUC DaoHam(DATHUC f)
{
	DATHUC temp=f;
	for (int i = f.n; i >= 1; i--)
	{
		temp.a[i - 1] = f.a[i] *i;
	}
	temp.n = f.n - 1;

	return temp;
}