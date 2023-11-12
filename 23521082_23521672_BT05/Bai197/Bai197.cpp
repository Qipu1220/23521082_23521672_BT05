#include <iostream>
using namespace std;

struct Diem
{
	float a;
	float b;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Xuat(DUONGTRON a[], int&);
void Xuat(DUONGTRON a);

void Xuat(DUONGTRON a)
{
	cout << "Tam duong tron: (" << a.I.a << ";" << a.I.b << ")";
	cout << "Ban kinh: " << a.R;
}

void Xuat(DUONGTRON a[], int& n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}

int main()
{
	DUONGTRON a[100];
	int n;
	Xuat(a, n);
	return 0;
}