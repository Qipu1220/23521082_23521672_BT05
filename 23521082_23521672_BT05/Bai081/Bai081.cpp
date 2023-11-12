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
void QuiDongTu(HONSO&, HONSO&);

int main()
{
	HONSO a, b;
	cout << "Nhap hon so thu nhat: \n";
	Nhap(a);
	Xuat(a);
	cout << "\nNhap hon so thu hai: \n";
	Nhap(b);
	Xuat(b);
	cout << "Qui dong tu 2 hon so: ";
	cout << endl;
	QuiDongTu(a, b);
	Xuat(a);
	cout << endl;
	Xuat(b);
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

void QuiDongTu(HONSO& x, HONSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}

