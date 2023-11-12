#include <iostream>
#include <iomanip>
using namespace std;

struct sophuc
{
	int Thuc;
	int Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);

int main()
{
	SOPHUC a, b;
	cout << "Nhap so phuc thu nhat: " << endl;
	Nhap(a);
	Xuat(a);
	cout << "\nNhap so phuc thu hai: " << endl;
	Nhap(b);
	Xuat(b);
	cout << "\nTong hai so phuc: " << endl;
	Xuat(Tong(a, b));
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}


void Xuat(SOPHUC x)
{
	cout << "Phan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp; 
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}


