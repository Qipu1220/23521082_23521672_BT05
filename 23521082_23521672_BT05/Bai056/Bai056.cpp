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
void QuiDongMau(PHANSO&, PHANSO&);

int main()
{
	PHANSO a, b;
	cout << "Phan so thu nhat: " << endl;
	Nhap(a);
	Xuat(a);
	cout << "\nPhan so thu hai: " << endl;
	Nhap(b);
	Xuat(b);
	QuiDongMau(a, b);
	cout << endl << "Phan so thu nhat sau qui dong: ";
	Xuat(a);
	cout << endl << "Phan so thu hai sau qui dong: ";
	Xuat(b);
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

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = y.Tu * x.Mau;
	x.Mau = mc;
	y.Mau = mc;
}

