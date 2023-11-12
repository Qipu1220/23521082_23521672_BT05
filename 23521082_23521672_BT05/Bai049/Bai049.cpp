#include<iostream>
using namespace std;

struct PhanSo
{
	float Tu;
	float Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO& a)
{
	cout << "Nhap phan so " << endl;
	cout << "Nhap tu: ";
	cin >> a.Tu;
	cout << "Nhap mau: ";
	cin >> a.Mau;
}

void Xuat(PHANSO a)
{
	cout << "Phan so la: " << endl;
	cout << "Tu: "<< a.Tu<< endl;
	cout << "Mau: "<< a.Mau<<endl;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}
PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
int main()
{
	PHANSO A, B;
	Nhap(A);
	Xuat(A);
	Nhap(B);
	Xuat(B);
	PHANSO C;
	C = Hieu(A, B);
	cout << "Hieu cua hai phan so la: " << endl;
	Xuat(C);
	return 1;
}