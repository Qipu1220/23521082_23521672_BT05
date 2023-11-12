#include <iostream>
#include<cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

int main()
{
	TAMGIAC A;

	Nhap(A);
	cout << "Tam giac: ";
	Xuat(A);

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

void Nhap(TAMGIAC& t)
{
	cout << "Nhap diem A: ";
	Nhap(t.A);
	cout << "Nhap diem B: ";
	Nhap(t.B); 
	cout << "Nhap diem C: ";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\nDiem A: ";
	Xuat(t.A);
	cout << "\nDiem B: ";
	Xuat(t.B);
	cout << "\nDiem C: ";
	Xuat(t.C);
}