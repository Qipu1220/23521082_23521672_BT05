#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo phanso;

void Nhap(phanso&);
phanso operator/(phanso, phanso);
int UCLN(int, int);
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

phanso operator/(phanso a, phanso b)
{
	phanso t;
	t.tu = a.tu * b.mau;
	t.mau = a.mau * b.tu;
	RutGon(t);
	return t;
}

int main()
{
	phanso a, b;
	Nhap(a);
	Nhap(b);
	cout << "a / b =";
	cout << operator/(a, b).tu << "/" << operator/(a, b).mau;
	return 0;
}