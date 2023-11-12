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

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	return 0;
}