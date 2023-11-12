#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DiemDoiXungPhanGiac2(DIEM);

int main()
{
	DIEM a;

	Nhap(a);
	cout << "Diem a: ";
	Xuat(a);
	cout << "\nDiem doi xung a qua duong phan giac 2: ";
	Xuat(DiemDoiXungPhanGiac2(a));

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

DIEM DiemDoiXungPhanGiac2(DIEM P)
{
	DIEM temp;
	temp.x = -P.y;
	temp.y = -P.x;
	return temp;
}