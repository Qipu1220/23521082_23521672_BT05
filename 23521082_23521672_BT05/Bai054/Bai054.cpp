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
	cout << "Tu: " << a.Tu << endl;
	cout << "Mau: " << a.Mau << endl;
}
int KTD(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	else
		return 0;
}
int main()
{
	PHANSO A;
	Nhap(A);
	Xuat(A);
	int kq = KTD(A);
	if (kq == 1)
		cout << "Phan so duong." << endl;
	else
		cout << "Phan so khong duong." << endl;
	return 1;
}