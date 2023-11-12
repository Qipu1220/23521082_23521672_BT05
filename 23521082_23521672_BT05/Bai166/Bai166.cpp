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
DATHUC DaoHam(DATHUC);
DATHUC DaoHam(DATHUC, int);

int main()
{
	DATHUC f;
	Nhap(f);
	Xuat(f);
	int k;
	cout << "\nNhap so lan dao ham: ";
	cin >> k;
	cout << "Dao ham cap " <<k<< " cua f: ";
	Xuat(DaoHam(f, k));
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

DATHUC DaoHam(DATHUC f)
{
	DATHUC temp;
	temp.n = f.n - 1;
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = f.a[i + 1] * (i + 1);
	}
	return temp;
}

DATHUC DaoHam(DATHUC f, int k)
{
	DATHUC temp = f;
	for (int i = 0; i < k; i++)
	{
		temp = DaoHam(temp);
	}
	return temp;
}