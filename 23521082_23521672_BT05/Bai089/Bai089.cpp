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
int SoThuTu(THOIGIAN M)
{
	return M.Gio * 3600 + M.Phut * 60 + M.Giay;
}
int KhoangCach(THOIGIAN P, THOIGIAN Q)
{
	int a = SoThuTu(P);
	int b = SoThuTu(Q);
	return abs(a - b);
}
void Xuat(THOIGIAN P)
{
	cout << "Gio la: " << P.Gio << endl;
	cout << "Phut la: " << P.Phut << endl;
	cout << "Giay la: " << P.Giay << endl;
}
int main()
{
	THOIGIAN A,B;
	Nhap(A);
	Xuat(A);
	Nhap(B);
	Xuat(B);
	int kq = KhoangCach(A, B);
	cout << "Khoang cach giua hai thoi gian la: " << kq;
	return 1;
}