#include <iostream>
#include<iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM a[100][100], P;
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Nhap diem can kiem tra: ";
	Nhap(P);
	cout << "Diem vua nhap xuat hien " << TanSuat(a, m, n, P) << " lan";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << P.x << "|" << P.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]: ";
			Nhap(a[i][j]);
		}
	}
}

void Xuat(DIEM a[][100], int m, int n)
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

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

int TanSuat(DIEM a[][100], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktTrung(a[i][j], P) == 1)
			{
				dem++;
			}
		}
	}
	return dem;
}