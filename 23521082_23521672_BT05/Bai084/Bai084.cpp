#include<iostream>
#include<iomanip>
using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

void Nhap(THOIGIAN& P)
{
	cout << "Nhap gio: ";
	cin >> P.Gio;	
	cout << "Nhap phut: ";
	cin >> P.Phut;	
	cout << "Nhap giay: ";
	cin >> P.Giay;
}
void Xuat(THOIGIAN P)
{
	cout << "Gio la: " << P.Gio << endl;
	cout << "Phut la: " << P.Phut << endl;
	cout << "Giay la: " << P.Giay << endl;
}
int main()
{
	THOIGIAN A;
	Nhap(A);
	Xuat(A);
	return 1;
}