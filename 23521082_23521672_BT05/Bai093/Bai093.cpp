#include<iostream>
using namespace std;
struct NGAY
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct NGAY NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

int main()
{
	NGAY A;
	Nhap(A);
	Xuat(A);
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "Nhap Ngay: ";
	cin >> x.Ngay;
	cout << "Nhap Thang: ";
	cin >> x.Thang;
	cout << "Nhap Nam: ";
	cin >> x.Nam;
}
void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay;
	cout << "\nThang: " << x.Thang;
	cout << "\nNam: " << x.Nam;
}
