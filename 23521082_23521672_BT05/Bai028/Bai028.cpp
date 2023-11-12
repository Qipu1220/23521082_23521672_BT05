#include<iostream>
#include<iomanip>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
int ktThuoc2(DIEM);

int main()
{
	DIEM A, B;
	cout << "Nhap toa do diem 1: ";
	Nhap(A);
	cout << ktThuoc2(A);
	return 1;
}

void Nhap(DIEM& f)
{
	cout << "\nNhap x: ";
	cin >> f.x;
	cout << "\nNhap y: ";
	cin >> f.y;
}
int ktThuoc2(DIEM P)
{
	if (P.x < 0 && P.y>0)
		return 1;
	return 0;
}