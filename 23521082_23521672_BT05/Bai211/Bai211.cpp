#include <iostream>
#include <iomanip>
using namespace std;


struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;


struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG[], int&);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Xuat(DUONGTHANG[], int);
bool ktThuoc(DUONGTHANG, DIEM);
int ktQuaDiem(DUONGTHANG[], int, DIEM);
void Nhap(DIEM&);

int main()
{
	DUONGTHANG a[100];
	int n;
	DIEM P;
	Nhap(a, n);
	Xuat(a, n);
	Nhap(P);
	cout << ktQuaDiem(a, n, P);
	return 0;
}


void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do diem: ";
	cin >> P.x;
	cout << "Nhap tung do diem: ";
	cin >> P.y;
}
void Nhap(DUONGTHANG& l)
{
	cout << "\nNhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Xuat(DUONGTHANG l)
{
	cout << "\n(" << l.a << ")x + (" << l.b << ")y + (" << l.c << ") = 0" << endl;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang " << i + 1;
		Xuat(a[i]);
	}
}

bool ktThuoc(DUONGTHANG l, DIEM P)
{
	if ((l.a * P.x + l.b * P.y + l.c) == 0)
		return true;
	return false;
}

int ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktThuoc(a[i], P))
			flag = 1;
	}
	return flag;
}