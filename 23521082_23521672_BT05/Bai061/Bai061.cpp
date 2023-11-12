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
PHANSO operator*(PHANSO, PHANSO);
PHANSO RutGon(PHANSO&);

int main()
{
	PHANSO a, b;
	cout << "Phan so thu nhat: " << endl;
	Nhap(a);
	Xuat(a);
	cout << "\nPhan so thu hai: " << endl;
	Nhap(b);
	Xuat(b);
	PHANSO x = a * b;
	cout << endl;
	Xuat(x);
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
	while (a*b !=0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	x.Tu = x.Tu / (a+b);
	x.Mau = x.Mau / (a+b);
	return x;
}

PHANSO operator*(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}



