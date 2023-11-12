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
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int main()
{
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nHoanh do: " << P.x;
	cout << "\nTung do: " << P.y;
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


void Xuat(DIEM a[50], int n)
{
	cout << "Cac diem da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]: ";
		Xuat(a[i]);
	}
}