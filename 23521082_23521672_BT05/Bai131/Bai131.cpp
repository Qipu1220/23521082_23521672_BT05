#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
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

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
void Nhap(HINHCAU&);
void Xuat(HINHCAU);
float DienTichXungQuanh(HINHCAU);
int main()
{
	HINHCAU c;
	Nhap(c);
	Xuat(c);
	cout << "\nDien tich xung quanh hinh cau: " << DienTichXungQuanh(c);
	return 0;
}

void Nhap(DIEMKHONGGIAN& I)
{
	cout << "\nNhap hoanh do tam: ";
	cin >> I.x;
	cout << "Nhap tung do tam:  ";
	cin >> I.y;
	cout << "Nhap cao do tam: ";
	cin >> I.z;
}

void Xuat(DIEMKHONGGIAN I)
{
	cout << "\nHoanh do tam: " << I.x;
	cout << "\nTung do tam: " << I.y;
	cout << "\nCao do tam: " << I.z;
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam hinh cau: ";
	Nhap(c.I);
	cout << "Nhap ban kinh hinh cau: ";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}


float DienTichXungQuanh(HINHCAU c)
{
	return (4 * M_PI * pow(c.R, 2));
}