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
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DIEM);

int main()
{
	DUONGTRON A;
	DIEM B;
	
	Nhap(A);
	cout << "Duong tron: ";
	Xuat(A);
	
	Nhap(B);
	cout << "Diem: ";
	Xuat(B);

	cout << "\nVi tri tuong doi: " << TuongDoi(A, B);

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