#include <iostream>
#include <iomanip>
using namespace std;

struct dathuc
{
	float a[100];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC Hieu(DATHUC, DATHUC);
int LonNhat(int, int);

int main()
{
	DATHUC f1, f2;
	cout << "Nhap da thuc f1: ";
	Nhap(f1);
	Xuat(f1);
	cout << "\nNhap da thuc f2: ";
	Nhap(f2);
	Xuat(f2);
	cout << "\nHieu hai da thuc: ";
	Xuat(Hieu(f1, f2));
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	cout << "\nBac cao nhat: " << f.n << endl;
	for (int i = f.n; i >= 0; i--)
	{
		cout << f.a[i];
		if (i != 0)
		{
			cout << "x^" << i << setw(3) << "+" << setw(3);
		}
	}
}


int LonNhat(int a, int b)
{
	int lc = a;
	if (a < b)
		lc = b;
	return lc;
}

DATHUC Hieu(DATHUC f1, DATHUC f2)
{
	DATHUC temp;
	temp.n = LonNhat(f1.n, f2.n);
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = 0;
	}

	for (int i = f1.n; i >= 0; i--)
	{
		temp.a[i] += f1.a[i];
	}
	for (int i = f2.n; i >= 0; i--)
	{
		temp.a[i] -= f2.a[i];
	}
	return temp;
}