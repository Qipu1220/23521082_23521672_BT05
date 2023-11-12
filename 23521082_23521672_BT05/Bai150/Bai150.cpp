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
float KhoangCach(DUONGTHANG, DIEM);

int main()
{
	DUONGTHANG a;
	DIEM b;

	Nhap(a);
	cout << "Duong thang: ";
	Xuat(a);

	Nhap(b);
	cout << "Diem: ";
	Xuat(b);

	cout << "\nKhoang cach: " << KhoangCach(a, b);

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
	cout << "Nhap a: ";
	cin>>d.a;
	cout << "Nhap b: ";
	cin>>d.b;
	cout << "Nhap c: ";
	cin>>d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = d.a * P.x + d.b * P.y + d.c;
	float mau = sqrt(pow(d.a, 2) + pow(d.b, 2));
	return tu / mau;
}