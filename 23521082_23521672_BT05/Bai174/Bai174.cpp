#include<iostream>
#include<iomanip>

using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[200], int&);
void Xuat(DIEM[200], int);

int main()
{
	DIEM a[200];
	int n;
	Nhap(a, n);
	cout << "Cac toa do la: " << endl;
	Xuat(a, n);
	return 1;
}

void Nhap(DIEM& p)
{
	cout << "\nNhap x: " << endl;
	cin >> p.x;
	cout << "Nhap y: " << endl;
	cin >> p.y;
}

void Nhap(DIEM a[200], int& n)
{
	cout << "Nhap bao nhieu toa do: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(DIEM p)
{
	cout << "\nx: " << p.x << endl;
	cout << "y: " << p.y << endl;
}
void Xuat(DIEM a[200], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		Xuat(a[i]);
	}
}