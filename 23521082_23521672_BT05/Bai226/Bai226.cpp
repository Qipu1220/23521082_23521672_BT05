#include <iostream>
#include<iomanip>
#include <cmath>
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
float KhoangCach2Diem(DIEM, DIEM);
DIEM TimDiemGan(DIEM[][100], int m, int n, DIEM);


int main()
{
	DIEM a[100][100], P;
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Nhap diem can kiem tra: ";
	Nhap(P);
	Xuat(TimDiemGan(a, m, n, P));
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
			cout << "Nhap a[" << i << "]["<<j<<"]:";
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

float KhoangCach2Diem(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

DIEM TimDiemGan(DIEM a[][100], int m, int n, DIEM P)
{
	DIEM lc = a[0][0];
	bool wanttobreak = false;
	for (int i = 0; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (ktTrung(P, lc) == 1)
			{
				lc = a[i][j];
				if (ktTrung(lc, P) == 0)
				{
					wanttobreak = true;
					break;
				}
			}
		}
		if (wanttobreak == true)
			break;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((ktTrung(a[i][j], P) == 0) && KhoangCach2Diem(lc, P) > KhoangCach2Diem(a[i][j], P))
				lc = a[i][j];
		}
	}
	return lc;
}
