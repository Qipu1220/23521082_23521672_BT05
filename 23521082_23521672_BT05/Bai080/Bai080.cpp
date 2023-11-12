#include <iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
void QuyDongMau(HONSO&, HONSO&);

int main()
{
	HONSO a, b;

	Nhap(a);
	cout << "Hon so a: ";
	Xuat(a);

	Nhap(b);
	cout << "Hon so b: ";
	Xuat(b);

	QuyDongMau(a, b);

	cout << "\nHon so a sau khi quy dong: ";
	Xuat(a);

	cout << "\nHon so b sau khi quy dong: ";
	Xuat(b);

	return 0;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void QuyDongMau(HONSO& x, HONSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = y.Tu * x.Mau;
	x.Mau = mc;
	y.Mau = mc;
}