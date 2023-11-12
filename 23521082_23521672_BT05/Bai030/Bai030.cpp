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
int ktThuoc4(DIEM);

int main()
{
	DIEM a;

	Nhap(a);
	cout << "Diem a: ";
	Xuat(a);
	if (ktThuoc4(a) == 1)
		cout << "\na thuoc phan tu thu IV";
	else
		cout << "\na khong thuoc phan tu thu IV";

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

int ktThuoc4(DIEM P)
{
	if (P.x > 0 && P.y < 0)
		return 1;
	return 0;
}