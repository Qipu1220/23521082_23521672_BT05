#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct diemkg
{
	float x;
	float y;
	float z;
};
typedef struct diemkg DIEMKG;

struct hinhcau
{
	DIEMKG I;
	float R;
};
typedef struct hinhcau HINHCAU;
void Nhap(DIEMKG& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Nhap(HINHCAU& C)
{
	cout << "\nNhap tam I: ";
	Nhap(C.I);
	cout << "Nhap R: ";
	cin >> C.R;
}
int main()
{
	DIEMKG m;
	HINHCAU hc;

	cout << "Nhap hinh cau: ";
	Nhap(hc);
	cout << "Nhap diem m: ";
	Nhap(m);
	return 1;
}