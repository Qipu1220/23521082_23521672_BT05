#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: "<<endl;
	cin >> d.a;
	cout << "Nhap b: "<<endl;
	cin >> d.b;
	cout << "Nhap c: " << endl;
	cin >> d.c;
}
void Nhap(DIEM& p)
{
	cout << "Nhap x: "<<endl;
	cin >> p.x;
	cout << "Nhap y: "<<endl;
	cin >> p.y;
}
void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}
void Xuat(DIEM p)
{
	cout << "\nx: " << p.x;
	cout << "\ny: " << p.y;
}
int KT(DUONGTHANG d, DIEM p)
{
	if ((d.a * p.x + d.b * p.y + d.c) == 0)
		return 1;
	return 0;
}
int main()
{
	DUONGTHANG denta;
	DIEM P;
	Nhap(P);
	Xuat(P);
	Nhap(denta);
	Xuat(denta);
	int kq = KT(denta, P);
	if (kq == 1)
		cout << "Thuoc."<<endl;
	cout << "Khong thuoc."<<endl;
	return 1;
}