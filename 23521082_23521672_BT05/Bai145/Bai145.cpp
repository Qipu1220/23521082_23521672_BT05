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
float KhoangCach(DIEM, DIEM);
int DangTamGiac(TAMGIAC);

int main()
{
	TAMGIAC A;

	Nhap(A);
	cout << "Tam giac: ";
	Xuat(A);

	cout << "\nDang cua tam giac: " << DangTamGiac(A);

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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow((P.x - Q.x), 2) + pow((P.y - Q.y), 2));
}

int DangTamGiac(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.B, t.A);
	if (!(a + b > c && a + c > b && b + c > a))
		return 0;
	if (a == b && b == c)
		return 1;
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
	{
		if (a == b || a == c || b == c)
			return 2;
		return 3;
	}
	if (a == b || a == c || b == c)
		return 4;
	return 5;
}