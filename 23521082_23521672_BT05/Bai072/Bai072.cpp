#include <iostream>
using namespace std;

struct honso
{
	int nguyen;
	int tu;
	int mau;
};
typedef struct honso hso;

void Nhap(hso&);

void Nhap(hso& a)
{
	cout << "Nhap nguyen: ";
	cin >> a.nguyen;
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

int main()
{
	hso a;
	Nhap(a);
	return 0;
}