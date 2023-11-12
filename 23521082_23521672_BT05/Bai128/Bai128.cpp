#include<iostream>
#include<iomanip>

using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

struct hinhcau	
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEMKHONGGIAN&);
void Xuat(HINHCAU);

int main()
{
	HINHCAU C;
	cout << "Nhap HINHCAU: ";
	Nhap(C);

	return 1;
}

void Nhap(DIEMKHONGGIAN& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
	cout << "\nNhap z: ";
	cin >> I.z;
}
void Nhap(HINHCAU& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}

