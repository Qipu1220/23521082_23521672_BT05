#include<iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap so phan tu: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(PHANSO n)
{
	cout << "\nTu: " << n.Tu << endl;
	cout << "Mau: " << n.Mau << endl;
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}


int KTAMle(int n)
{
	if (n < 0)
		return 1;
	return 0;
}
int KTAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return 1;
	return 0;
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
int TimViTri(PHANSO a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (KTAm(a[n - 1]) == 0)
		return lc;
	if (KTAMle(lc) == 0)
		return n - 1;
	if (SoSanh(a[n - 1], a[lc]) == -1)
		lc = n - 1;
	return lc;
}

int main()
{
	PHANSO A[100];
	int n;
	Nhap(A, n);
	cout << "Du lieu vua nhap la: " << endl;
	Xuat(A, n);
	int kq = TimViTri(A, n);
	cout << "Vi tri la: " << kq;
	return 1;
}