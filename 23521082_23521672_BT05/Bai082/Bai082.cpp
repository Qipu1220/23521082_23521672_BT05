#include <iostream>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian tg;

void Nhap(tg&);

void Nhap(tg& a)
{
	cout << "Nhap gio: ";
	cin >> a.Gio;
	cout << "Nhap phut: ";
	cin >> a.Phut;
	cout << "Nhap giay: ";
	cin >> a.Giay;
}

int main()
{
	tg a;
	Nhap(a);
	cout << "Thoi gian vua nhap la: ";
	cout << a.Gio << "h" << a.Phut << "m" << a.Giay << "s";
	return 0;
}