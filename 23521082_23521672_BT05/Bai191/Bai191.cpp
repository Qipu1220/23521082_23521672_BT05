#include <iostream>
#include <iomanip>
using namespace std;

struct sophuc
{
	int thuc;
	int ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int);

int main()
{
	SOPHUC a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(SOPHUC& z)
{
	cout << "\nNhap phan thuc: ";
	cin >> z.thuc;
	cout << "Nhap phan ao: ";
	cin >> z.ao;
}

void Xuat(SOPHUC z)
{
	cout << z.thuc << "+(" << z.ao << "i)";
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	cout << "Mang so phuc: " << endl;
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << setw(8);
	}
}