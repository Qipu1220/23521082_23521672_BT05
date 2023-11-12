#include <iostream>
using namespace std;

struct Ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct Ngay ngay;

void Nhap(ngay&);

void Nhap(ngay& a)
{
	cout << "Nhap ngay: ";
	cin >> a.ngay;
	cout << "Nhap thang: ";
	cin >> a.thang;
	cout << "Nhap nam: ";
	cin >> a.nam;
}

int main()
{
	ngay a;
	Nhap(a);
	cout << "Ngay vua nhap la: ";
	cout << "Ngay " << a.ngay << " Thang " << a.thang << " Nam " << a.nam;
	return 0;
}