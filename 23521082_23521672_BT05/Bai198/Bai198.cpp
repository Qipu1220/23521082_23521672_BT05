#include<iostream>
#include<iomanip>

using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Xuat(DIEM P)
{
	cout << "x=" << P.x<<endl;
	cout << "y=" << P.y<<endl;
}
void Nhap(DUONGTRON&);
void Nhap(DIEM&);
void Xuat(DUONGTRON);
void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}
float KhoangCachGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.I);
	return abs(kc - c.R);
}
DUONGTRON GanGocNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 1; i < n; i++)
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
			lc = a[i];
	return lc;
}

int main()
{
	DUONGTRON C[100];
	int n;
	cout << "Nhap n DUONGTRON: ";
	Nhap(C,n);
	cout << "Duong tron gan goc nhat la: ";
	Xuat(GanGocNhat(C, n));
	return 1;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "Tam duong tron la: "<<endl;
	Xuat(c.I);
	cout << "Ban kinh duong tron la: " << c.R;
}

