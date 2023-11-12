#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO a)
{
	cout << "Nhap tu : ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

void Nhap(PHANSO[][100], int&, int&);

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Nhap(a[i][j]);

}

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
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

void SapTang(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i <= m * n - 2; i++)
		for (int j = i + 1; j <= m * n - 1; j++)
			if (SoSanh(a[i / n][i % n], a[j / n][j % n]) == 1)
				HoanVi(a[i / n][i % n], a[j / n][j % n]);

}

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	SapTang(a, m, n);
	return 0;
}