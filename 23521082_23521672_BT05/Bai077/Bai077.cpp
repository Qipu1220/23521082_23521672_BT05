#include <iostream>
using namespace std;

struct honso
{
	int nguyen;
	int tu;
	int mau;
};
typedef struct honso hso;

void Nhap(hso&);
hso Tich(hso a, hso b);

void Nhap(hso& a)
{
	cout << "Nhap nguyen: ";
	cin >> a.nguyen;
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(hso& x)
{
	int kq = UCLN(x.tu, x.mau);
	x.tu = x.tu / kq;
	x.mau = x.mau / kq;
	x.nguyen = x.nguyen + x.tu / x.mau;
	x.tu = x.tu % x.mau;
}

hso Tich(hso a, hso b)
{
	a.tu = a.nguyen * a.mau + a.tu;
	a.nguyen = 0;
	b.tu = b.nguyen * b.mau + b.tu;
	b.nguyen = 0;
	hso t;
	t.nguyen = 0;
	RutGon(t);
	return t;
}

int main()
{
	hso a,b;
	Nhap(a);
	Nhap(b);
	Tich(a, b);
	cout << "Tich hai hon so la: " << Tich(a, b).nguyen<<"+"<<Tich(a,b).tu<<"/"<<Tich(a,b).mau;
	return 0;
}