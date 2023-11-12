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
void Xuat(THOIGIAN);

int main()
{
	THOIGIAN A;
	cout << "Nhap thoi gian : ";
	Nhap(A);
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
