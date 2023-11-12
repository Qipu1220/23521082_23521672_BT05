#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

int main()
{
	TAMGIAC t;
	Nhap(t);
	Xuat(t);
	return 0;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap hoanh do: ";
	cin >> I.x;
	cout << "\nNhap tung do: ";
	cin >> I.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "\nNhap diem A: ";
	Nhap(t.A);
	cout << "Nhap diem B: ";
	Nhap(t.B);
	cout << "Nhap diem C: ";
	Nhap(t.C);
}

void Xuat(DIEM I)
{
	cout << "\nHoanh do: " << I.x;
	cout << "\nTung do: " << I.y;
}

void Xuat(TAMGIAC t)
{
	cout << "\nA: ";
	Xuat(t.A);
	cout << "\nB: ";
	Xuat(t.B);
	cout << "\nC: ";
	Xuat(t.C);
}