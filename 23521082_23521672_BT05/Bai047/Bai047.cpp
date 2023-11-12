#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo phanso;

void Nhap(phanso&);
int UCLN(int , int );
void RutGon(phanso&);

void Nhap(phanso& a)
{
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

void RutGon(phanso& a)
{
	int k = UCLN(a.tu, a.mau);
	a.tu = a.tu / k;
	a.mau = a.mau / k;
}

int main()
{
	phanso a;
	Nhap(a);
	RutGon(a);
	cout << "Phan so sau khi rut gon: " << a.tu << "/" << a.mau;
	return 0;
}