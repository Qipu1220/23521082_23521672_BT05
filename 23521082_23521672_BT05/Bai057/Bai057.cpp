#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo phanso;

void Nhap(phanso&);
void qdtu(phanso&, phanso&);

void Nhap(phanso& a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

void qdtu(phanso& a, phanso& b)
{
	int k = a.tu * b.tu;
	a.mau = a.mau * b.tu;
	b.mau = b.mau * a.tu;
	a.tu = k;
	b.tu = k;
}

int main()
{
	phanso a,b;
	Nhap(a);
	Nhap(b);
	qdtu(a,b);
	cout << "Hai phan so sau khi qui dong tu la: " << endl;
	cout << a.tu << "/" << a.mau << endl;
	cout << b.tu << "/" << b.mau << endl;
	return 0;
}