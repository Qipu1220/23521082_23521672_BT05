#include <iostream>
#include <cmath>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
int UCLN(int, int);
void RutGon(PHANSO&);
PHANSO Tich(PHANSO, PHANSO);

int main()
{
	PHANSO a,b;

	Nhap(a);
	cout << "Phan so thu nhat la: ";
	Xuat(a);

	Nhap(b);
	cout << "Phan so thu hai la: ";
	Xuat(b);

	cout << "\nTich hai phan so la: ";
	Xuat(Tich(a, b));

	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
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

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO Tich(PHANSO P, PHANSO Q)
{
	PHANSO temp;
	temp.Tu = P.Tu * Q.Tu;
	temp.Mau = P.Mau * Q.Mau;
	RutGon(temp);
	return temp;
}