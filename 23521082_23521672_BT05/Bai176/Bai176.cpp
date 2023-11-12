#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM [], int&);
void Xuat(DIEM [], int);
DIEM TungLonNhat(DIEM[], int);


int main()
{
	DIEM a[50];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Diem co tung do lon nhat: ";
	Xuat(TungLonNhat(a, n));
	return 0;
}

DIEM TungLonNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i].y > lc.y)
			lc = a[i];
	}
	return lc;
}


void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}
void Nhap(DIEM a[50], int& n)
{
	cout << "Nhap so diem: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "\nHoanh do: " << P.x;
	cout << "\nTung do: " << P.y;
}

void Xuat(DIEM a[50], int n)
{
	cout << "Cac diem da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]: ";
		Xuat(a[i]);
	}
}