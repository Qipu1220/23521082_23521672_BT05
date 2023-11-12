#include <iostream>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
int ktTrung(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap duong thang thu nhat: \n";
	Nhap(d1);
	Xuat(d1);
	cout << "\nNhap duong thang thu hai: \n";
	Nhap(d2);
	Xuat(d2);
	cout <<endl<< ktTrung(d1, d2);
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na= " << d.a;
	cout << "\nb= " << d.b;
	cout << "\nc= " << d.c;
}

int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}