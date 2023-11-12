#include <iostream>
#include <iomanip>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
PHANSO Thuong(PHANSO, PHANSO);
PHANSO RutGon(PHANSO&);

int main()
{
	PHANSO a,b;
	cout << "Phan so thu nhat: " << endl;
	Nhap(a);
	Xuat(a);
	cout << "\nPhan so thu hai: " << endl;
	Nhap(b);
	Xuat(b);
	cout << endl << "Thuong hai phan so: ";
	Xuat(Thuong(a, b));
	return 0;
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
	cout << x.Tu << "/" << x.Mau;
}

PHANSO RutGon(PHANSO& x)
{
	int a = abs(x.Tu);
	int b = abs(x.Mau);
	while (a  != b)
	{
		if (a > b)
			a = a - b;
		if (b > a)
			b = b - a;
	}
	x.Tu = x.Tu / a;
	x.Mau = x.Mau / a;
	return x;
}


PHANSO Thuong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	RutGon(temp);
	return temp;

}