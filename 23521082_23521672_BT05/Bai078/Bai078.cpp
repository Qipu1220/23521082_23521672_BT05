#include<iostream>
using namespace std;
struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO& x);
void Xuat(HONSO x);
HONSO Thuong(HONSO, HONSO);
void RutGon(HONSO& x);
int UCLN(int a, int b);

int main()
{
	HONSO A, B;
	cout << "Nhap hon so 1: ";
	Nhap(A);
	cout << "Nhap hon so 2: ";
	Nhap(B);
	Xuat(Thuong(A, B));
	return 1;
}

void Nhap(HONSO& x)
{
	cout << "Nhap nguyen: ";
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
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a -= b;
		else
			b -= a;
	return a + b;
}
void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu /= kq;
	x.Mau /= kq;
}
HONSO Thuong(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}