#include <iostream>
#include<cmath>
using namespace std;

struct PhanSo
{
	float Tu;
	float Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);
int SoSanh(PHANSO, PHANSO);
PHANSO NhoNhat(PHANSO[][100], int, int);
int DemNhoNhat(PHANSO[][100], int, int);

int main()

{
	PHANSO A[100][100];
	int m, n;
	cout << "Nhap ma tran phan so: ";
	Nhap(A, m, n);
	Xuat(A, m, n);

	cout << "\nSo phan tu nho nhat trong ma tran: " << DemNhoNhat(A, m, n);

	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "\nNhap hang: ";
	cin >> m;
	cout << "Nhap cot:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "\na[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
		}
}

int SoSanh(PHANSO x1, PHANSO x2)
{
	float a = (float)x1.Tu / x1.Mau;
	float b = (float)x2.Tu / x2.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

PHANSO NhoNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == -1)
				lc = a[i][j];
	return lc;
}


int DemNhoNhat(PHANSO a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], NhoNhat(a, m, n)) == 0)
				dem++;
	return dem;
}