#include<iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void RutGon(PHANSO& x);
int UCLN(int a, int b);
PHANSO Tong(PHANSO x, PHANSO y);
void Xuat(PHANSO x);

int main()
{
	PHANSO A,B;
	cout << "Nhap Phan so 1 : ";
	Nhap(A);
	cout << "Nhap Phan so 2: ";
	Nhap(B);
	cout << "\nTong Phan so : ";
	Xuat(Tong(A,B));
	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
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
			a -= b;
		else
			b -= a;
	return a + b;
}
void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu /= kq;
	x.Mau /= kq;
}
PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + x.Mau * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}