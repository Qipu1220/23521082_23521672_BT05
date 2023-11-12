#include<iostream>
#include<iomanip>

using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEMKHONGGIAN&);
void Xuat(HINHCAU);
int ktThuoc(HINHCAU, DIEMKHONGGIAN);

int main()
{
	HINHCAU C;
	DIEMKHONGGIAN P;
	cout << "Nhap HINHCAU: ";
	Nhap(C);
	cout << "Nhap Diem khong gian: ";
	Nhap(P);
	cout << ktThuoc(C, P);
	return 1;
}

void Nhap(DIEMKHONGGIAN& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
	cout << "\nNhap z: ";
	cin >> I.z;
}
void Nhap(HINHCAU& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}
float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) +
		   (Q.y - P.y) * (Q.y - P.y) +
		   (Q.z - P.z) * (Q.z - P.z));
}
int ktThuoc(HINHCAU c, DIEMKHONGGIAN P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}
