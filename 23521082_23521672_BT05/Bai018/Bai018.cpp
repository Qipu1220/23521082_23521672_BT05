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
float KhoangCachX(DIEM, DIEM);

int main()
{
	DIEM A, B;
	cout << "Nhap toa do diem 1: ";
	Nhap(A);
	cout << "Nhap toa do diem 2: ";
	Nhap(B);
	cout << "\nKhoang cach x(P,Q)=" << KhoangCachX(A, B);
	return 1;
}

void Nhap(DIEM& f)
{
	cout << "\nNhap x: ";
	cin >> f.x;
	cout << "\nNhap y: ";
	cin >> f.y;
}

float KhoangCachX(DIEM P, DIEM Q)
{
	return abs(Q.x - P.x);
}