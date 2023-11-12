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

int main()
{
	HONSO a;
	Nhap(a);
	cout << "Hon so da nhap: " << endl;
	Xuat(a);
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