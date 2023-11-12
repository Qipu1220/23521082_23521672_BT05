#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo phanso;

void Nhap(phanso&);
int kt(phanso);

void Nhap(phanso& a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

int kt(phanso a)
{
	if (a.mau != 0)
		return 1;
	return 0;
}

int main()
{
	phanso a;
	Nhap(a);
	kt(a);
	if (kt(a) == 1)
		cout << "Phan so co nghia";
	else
		cout << "Phan so khong co nghia";
	return 0;
}