#include <iostream>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float r;
};
typedef struct duongtron DUONGTRON;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG); 
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
float KhoangCach(DIEM, DUONGTHANG);
int TuongDoi(DUONGTRON, DUONGTHANG);

int main()
{
	DUONGTRON c;
	Nhap(c);
	Xuat(c);
	DUONGTHANG d;
	cout << "Nhap duong thang: \n";
	Nhap(d);
	Xuat(d);
	cout << endl<< TuongDoi(c, d);
	return 0;
}


void Nhap(DIEM& I)
{
	cout << "\nNhap hoanh do tam: ";
	cin >> I.x;
	cout << "Nhap tung do tam: ";
	cin >> I.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.r;
}

void Xuat(DIEM I)
{
	cout << "\nHoanh do tam: " << I.x;
	cout << "\nTung do tam: " << I.y;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: ";
	cout << c.r;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

float KhoangCach(DIEM I, DUONGTHANG d)
{
	return (abs(d.a * I.x + d.b * I.y + d.c) / (sqrt(d.a * d.a + d.b * d.b)));
} 

int TuongDoi(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCach(c.I, d);
	if (kc > c.r)
		return 0;
	if (kc < c.r)
		return 2;
	return 1;
}