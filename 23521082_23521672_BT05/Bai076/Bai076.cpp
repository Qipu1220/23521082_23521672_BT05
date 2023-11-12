#include <iostream>
#include <iomanip>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
HONSO Hieu(HONSO, HONSO);
HONSO RutGon(HONSO&);
int UCLN(int, int);

int main()
{
	HONSO a, b;
	cout << "Nhap hon so thu nhat: \n";
	Nhap(a);
	Xuat(a);
	cout << "\nNhap hon so thu hai: \n";
	Nhap(b);
	Xuat(b);
	cout << endl;
	cout << "Hieu hai hon so: " << endl;
	Xuat(Hieu(a, b));
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "Phan nguyen: " << x.Nguyen << endl;
	cout << x.Tu << "/" << x.Mau;
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

HONSO RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
	return x;
}

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp; 
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau*y.Mau;
	RutGon(temp);
	return temp;
}