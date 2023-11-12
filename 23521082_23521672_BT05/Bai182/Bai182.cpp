#include <iostream>
using namespace std;

struct PhanSo
{
	float x;
	float y;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO[], int&);
void Nhap(PHANSO a);

void Nhap(PHANSO a)
{
	cout << "Nhap tu: ";
	cin >> a.x;
	cout << "Nhap mau: ";
	cin >> a.y;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}


int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	return 0;
}