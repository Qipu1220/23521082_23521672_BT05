#include <iostream>
#include<cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[][100], int&,int&);
void Xuat(DIEM[][100], int, int);
int ktThuoc3(DIEM);
int DemThuoc3(DIEM[][100], int, int);

int main()

{
	DIEM A[100][100];
	int m,n;

	Nhap(A, m,n);
	Xuat(A, m,n);
	cout << "\nSo phan tu thuoc phan tu thu III: " << DemThuoc3(A, m, n);

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}


void Nhap(DIEM a[][100],int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "\nNhap cot:";
	cin >> n;
	for(int i=0;i<m;i++)
		for (int j = 0; j < m; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "\na[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
		}
}

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}

int DemThuoc3(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc3(a[i][j]))
				dem++;
	return dem;
}