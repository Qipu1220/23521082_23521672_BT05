#include<iostream>
using namespace std;

struct sophuc
{
	int Thuc;
	int Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int);
void Xuat(SOPHUC);
SOPHUC DauTien(SOPHUC[], int);

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
SOPHUC DauTien(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i].Thuc > 0 && a[i].Ao > 0)
			return a[i];
	}
	SOPHUC lc = { 0,0 };
	return lc;
}

int main()
{
	SOPHUC A[100];
	int n;
	cout << "Nhap so phan tu: "<<endl;
	cin >> n;
	Nhap(A, n);
	cout << "Du lieu vua nhap: "<<endl;
	Xuat(A, n);
	cout << "Dap an la: ";
	Xuat(DauTien(A, n));
	return 1;
}