#include<iostream>
#include<iomanip>

using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&);
void Nhap(DIEM&);
void Xuat(DUONGTRON);
float DienTich(DUONGTRON);

int main()
{
	DUONGTRON C;
	cout << "Nhap DUONGTRON: ";
	Nhap(C);
	cout << DienTich(C);
	return 1;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}

float DienTich(DUONGTRON c)
{
	return float(3.14*c.R*c.R);
}