#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Nhap(DIEM& p)
{
	cout << "Nhap x: "<<endl;
	cin >> p.x;
	cout << "Nhap y: "<<endl;
	cin >> p.y;
}
void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c<<endl;
}
void Xuat(DIEM p)
{
	cout << "\nx: " << p.x;
	cout << "\ny: " << p.y;
}
DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b - d2.c * d1.b;
	float Dy = -d1.a * d2.c - d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
int main()
{
	DUONGTHANG d1;
	DUONGTHANG d2;
	DIEM P;
	cout << "Nhap duong thang 1: ";
	Nhap(d1);
	Xuat(d1);
	cout << "Nhap duong thang 2: ";
	Nhap(d2);
	Xuat(d2);
	P = GiaoDiem(d1, d2);
	Xuat(P);
	return 1;
}