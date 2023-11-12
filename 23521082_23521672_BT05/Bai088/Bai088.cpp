#include<iostream>
using namespace std;
struct THOIGIAN
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct THOIGIAN THOIGIAN;

void Nhap(THOIGIAN&);
int SoThuTu(THOIGIAN x);

int main()
{
	THOIGIAN A;
	cout << "Nhap thoi gian : ";
	Nhap(A);
	cout << "So giay:" << SoThuTu(A);
	return 1;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}
int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}