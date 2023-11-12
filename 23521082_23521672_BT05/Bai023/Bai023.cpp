#include<iostream>
#include<iomanip>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungTung(DIEM);

int main()
{
	DIEM A, B;
	cout << "Nhap toa do diem 1: ";
	Nhap(A);
	cout << "Toa do diem doi xung qua truc tung la: ";
	Xuat(DoiXungTung(A));
	return 1;
}

void Nhap(DIEM& f)
{
	cout << "\nNhap x: ";
	cin >> f.x;
	cout << "\nNhap y: ";
	cin >> f.y;
}
void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx= " << P.x;
	cout << "\ny= " << P.y;
}
DIEM DoiXungTung(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	return temp;
}