#include <iostream>
#include<cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
float KhoangCach(DUONGTHANG, DIEM);
DIEM DiemGanNhat(DIEM[][100], int, int, DUONGTHANG);

int main()

{
	DIEM A[100][100];
	int m, n;
	DUONGTHANG d;
	cout << "Nhap ma tran diem: \n";
	Nhap(A, m, n);
	Xuat(A, m, n);
	cout << "\nNhap duong thang: ";
	Nhap(d);
	Xuat(d);
	cout << "\nDiem gan duong nhat: ";
	Xuat(DiemGanNhat(A, m, n, d));

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

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap hang: ";
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

void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "\na[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
		}
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float kc = (abs(d.a * P.x + d.b * P.y + d.c)) / (sqrt(pow(d.a, 2) + pow(d.b, 2)));
	return kc;
}

DIEM DiemGanNhat(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	DIEM lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KhoangCach(d, lc) > KhoangCach(d, a[i][j]));
	return lc;
}