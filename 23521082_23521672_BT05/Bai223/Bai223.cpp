#include<iostream>
#include<iomanip>

using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEM& I);
void Nhap(DIEM[][100], int&, int&);
void Nhap(DUONGTHANG &I);
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}
int DemDiem(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(d, a[i][j]))
				dem++;
	return dem;
}
int main()
{
	DIEM C[100][100];
	DUONGTHANG d;
	cout << " Nhap Duong thang: ";
	Nhap(d);
	int m,n;
	Nhap(C, m, n);
	cout << DemDiem(C, m, n, d);
	return 1;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
}


void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}
void Nhap(DUONGTHANG &I)
{
	cout << "\nNhap a: ";
	cin >> I.a;
	cout << "\nNhap b: ";
	cin >> I.b;
	cout << "\nNhap c: ";
	cin >> I.c;
}
