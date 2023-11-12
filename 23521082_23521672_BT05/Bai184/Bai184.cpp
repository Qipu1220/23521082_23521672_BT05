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
	cout << "Nhap so phan tu: "<<endl;
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

bool KTD(PHANSO n)
{
	if ((n.Tu * n.Mau) > 0)
		return true;
	return false;
}
int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (KTD(a[i]))
			dem++;
	}
	return dem;
}
int main()
{
	PHANSO A[100];
	int n;
	Nhap(A, n);
	cout << "Du lieu vua nhap la: " << endl;
	Xuat(A, n);
	int kq = DemDuong(A, n);
	cout << "So luong phan so duong la: " << kq;
	return 1;
}