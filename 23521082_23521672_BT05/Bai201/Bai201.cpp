#include <iostream>
#include <iomanip>
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
	float r;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON);
void Xuat(DUONGTRON[], int);
int ktTiepXucOy(DUONGTRON);
int KT(DUONGTRON[], int);


int main()
{
	DUONGTRON c[100];
	int n;
	Nhap(c, n);
	Xuat(c, n);
	cout << KT(c, n);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh ";
	cin >> c.r;
}

void Nhap(DUONGTRON c[], int& n)
{
	cout << "Nhap so duong tron: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(c[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "\nHoanh do: " << P.x;
	cout << "\nTung do: " << P.y;
}

void Xuat(DUONGTRON c)
{
	Xuat(c.I);
	cout << "\nBan kinh: " << c.r;
}
void Xuat(DUONGTRON c[], int n)
{
	cout << "Mang duong tron: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong tron " << i + 1;
		Xuat(c[i]);
	}
}

int ktTiepXucOy(DUONGTRON c)
{
	if (abs(c.I.x) == c.r)
	{
		return 1;
	}
	return 0;
}

int KT(DUONGTRON c[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktTiepXucOy(c[i]) == 1)
		{
			flag = 1;
		}
	}
	return flag;
}