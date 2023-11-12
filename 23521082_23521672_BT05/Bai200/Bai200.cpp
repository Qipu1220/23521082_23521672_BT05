#include <iostream>
#include<cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DUONGTRON[],int&);
void Xuat(DUONGTRON[], int);
float KhoangCach(DIEM, DIEM);
float KhoangCachOx(DUONGTRON);
DUONGTRON GanOxNhat(DUONGTRON[], int);

int main()
{
	DUONGTRON A[500];
	int n;

	Nhap(A,n);
	Xuat(A,n);
	cout << "\nDuong tron gan Ox nhat: ";
	Xuat(GanOxNhat(A, n));
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

void Nhap(DUONGTRON& C)
{
	Nhap(C.I);
	cout << "Nhap R: ";
	cin >> C.R;
}

void Xuat(DUONGTRON C)
{
	Xuat(C.I);
	cout << "\nR: " << C.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(a[i]);
	}
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow((P.x - Q.x), 2) + pow((P.y - Q.y), 2));
}

int TuongDoi(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}

float KhoangCachOx(DUONGTRON c)
{
	if (abs(c.I.y) < c.R)
		return 0;
	return abs(c.I.y) - c.R;
}

DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachOx(a[i]) < KhoangCachOx(lc))
			lc = a[i];
	return lc;
}