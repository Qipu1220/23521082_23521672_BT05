#include <iostream>
#include <iomanip>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);
int SoSanh(PHANSO, PHANSO);
PHANSO AmLonNhat(PHANSO[][100], int, int);

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nPhan so am lon nhat: ";
	Xuat(AmLonNhat(a, m, n));
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.tu;
	cout << "Nhap mau: ";
	cin >> x.mau;
}

void Xuat(PHANSO x)
{
	cout << x.tu << "/" << x.mau;
}

void Nhap(PHANSO a[][100], int& m , int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
	}
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8);
			Xuat(a[i][j]);
		}
		cout << endl;
	}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.tu / x.mau;
	float b = (float)y.tu / y.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = { 0,1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].tu*a[i][j].mau < 0)
				if (SoSanh(lc, temp) == 0 || (SoSanh(a[i][j], lc) == 1))
					lc = a[i][j];
	return lc;
}