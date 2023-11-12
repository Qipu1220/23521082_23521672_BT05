#include <iostream>
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

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);



int main()
{
	DUONGTRON c;
	Nhap(c);
	Xuat(c);
	return 0;
}


void Nhap(DIEM& I)
{
	cout << "\nNhap hoanh do tam: ";
	cin >> I.x;
	cout << "Nhap tung do tam: ";
	cin >> I.y;
}

void Xuat(DIEM I)
{
	cout << "\nTung do: " << I.x;
	cout << "\nHoanh do: " << I.y;
}


void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.r;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.r;
}

