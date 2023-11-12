#include<iostream>
#include<iomanip>

using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;


void Nhap(PHANSO& I);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO);
void Xuat(PHANSO a[][100], int m, int n);

void Nhap(PHANSO& p)
{
	cout << "\nNhap x: ";
	cin >> p.tu;
	cout << "\nNhap y: ";
	cin >> p.mau;
}


void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n ";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO x)
{
	cout << "\nTu:" << x.tu << endl;
	cout << "Mau:" << x.mau<<endl;
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << " a[" << i << "][" << j << "]:\n ";
			Xuat(a[i][j]);
			cout << endl;
		}
}
int SoSanh(PHANSO p, PHANSO q)
{
	if (p.tu / p.mau > q.tu / q.mau)
		return 1;
	return 0;
}
PHANSO LonNhat(PHANSO a[][100], int m, int  n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoSanh(a[i][j], lc) == 1)
				lc = a[i][j];
		}
	}
	return lc;
}

int main()
{
	PHANSO C[100][100],A;
	int m, n;
	Nhap(C, m, n);
	cout << "Phan so vua nhap la: " << endl;
	Xuat(C, m, n);
	A = LonNhat(C, m, n);
	cout << "Phan so lon nhat la: ";
	Xuat(A);
	return 1;
}