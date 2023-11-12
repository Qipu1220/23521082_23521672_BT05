#include<iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
int SoSanh(PHANSO x, PHANSO y);

int main()
{
	PHANSO A, B;
	cout << "Nhap Phan so 1 : ";
	Nhap(A);
	cout << "Nhap Phan so 2: ";
	Nhap(B);
	cout << "\nSoSanh Phan so : ";
	cout<< SoSanh(A, B);
	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}