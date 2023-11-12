#include <iostream>
#include<cmath>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
int ktVuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG a;
	DUONGTHANG b;

	Nhap(a);
	cout << "Duong thang a: ";
	Xuat(a);

	Nhap(b);
	cout << "Duong thang b: ";
	Xuat(b);

	if (ktVuongGoc(a, b))
		cout << "\n2 duong thang vuong goc voi nhau";
	else
		cout << "\n2 duong thang khong vuong goc voi nhau";
	
	return 0;
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

int ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;
	return 0;
}