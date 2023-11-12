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
DATHUC operator/(DATHUC, DATHUC);
DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);
DATHUC operator*(DATHUC, DATHUC);
int LonNhat(int, int);
void GiamBac(DATHUC&);

int main()
{
	DATHUC f, g;
	cout << "Nhap da thuc thu nhat: \n";
	Nhap(f);
	Xuat(f);
	cout << "\nNhap da thuc thu hai: \n";
	Nhap(g);
	Xuat(g);
	cout << "\nf chia g = ";
	DATHUC chia;
	Xuat(f / g);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
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
	if (b > a)
		lc = b;
	return lc;
}

void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0)
		f.n--;
}
DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = 0;
	}
	for (int i = f.n; i >= 0; i--)
	{
		temp.a[i] += f.a[i];
	}
	for (int i = g.n; i >= 0; i--)
	{
		temp.a[i] += g.a[i];
	}
	GiamBac(temp);
	return temp;
}


DATHUC operator-(DATHUC f, DATHUC g)
{
	for (int i = g.n; i >= 0; i--)
	{
		g.a[i] = -g.a[i];
	}
	return (f + g);
}


DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = 0;
	}
	for (int i = 0; i<=g.n; i++)
		for (int j = 0; j <=f.n; j++)
		{
			temp.a[i + j] += g.a[i] * f.a[j];
		}
	return temp;
}
DATHUC operator/(DATHUC f, DATHUC g)
{
	DATHUC bichia = f;
	DATHUC chia = g;
	DATHUC temp;
	temp.n = f.n - g.n;
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = 0;
	}
	while (bichia.n >= chia.n)
	{
		DATHUC tg;
		tg.n = bichia.n - chia.n;
		for (int i = tg.n; i >= 0; i--)
		{
			tg.a[i] = 0;
		}
		tg.a[tg.n] = bichia.a[bichia.n] / chia.a[chia.n];
		DATHUC tru = tg * chia;
		bichia = bichia - tru;
		temp = temp + tg;
	}
	return temp;
}
