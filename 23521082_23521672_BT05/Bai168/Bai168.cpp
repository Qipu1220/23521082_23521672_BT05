#include<iostream>
#include<iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC operator+(DATHUC, DATHUC);

int main()
{
	DATHUC ff,gg;
	cout << "Nhap da thuc 1: ";
	Nhap(ff);
	cout << "Nhap da thuc 2: ";
	Nhap(gg);
	Xuat(ff + gg);
	return 1;
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
	for (int i = f.n; i > 0; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
	cout << f.a[0];
}
DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp;
	if (f.n > g.n)
	{
		for (int i = f.n; i > g.n; i--)
		{
			temp.n = f.n;
			temp.a[i] = f.a[i];
		}
		for (int i = f.n; i >= 0; i--)
		{
			temp.a[i] = f.a[i] + g.a[i];
		}
	}
	else
	{
		for (int i = g.n; i > f.n; i--)
		{
			temp.n = g.n;
			temp.a[i] = g.a[i];
		}
		for (int i = f.n; i >= 0; i--)
		{
			temp.a[i] = f.a[i] + g.a[i];
		}
	}

	return temp;
}