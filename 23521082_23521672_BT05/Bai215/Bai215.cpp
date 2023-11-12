#include <iostream>
using namespace std;

struct Ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);

int main()
{
	NGAY a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);

	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay : ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(a[i]);
	}
}