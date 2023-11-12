#include<iostream>
#include<iomanip>
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
int ktCat(DUONGTHANG d1, DUONGTHANG d2);

int main()
{
	DUONGTHANG A, B;
	cout << "Nhap duong thang 1: ";
	Nhap(A);
	cout << "Nhap duong thang 2: ";
	Nhap(B);
	cout << ktCat(A, B);
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "\nNhap b: ";
	cin >> d.b;
	cout << "\nNhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}