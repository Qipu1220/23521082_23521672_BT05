#include<iostream>
#include<iomanip>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM& f)
{
	cout << "Nhap x: ";
	cin >> f.x;
	cout << "Nhap y: ";
	cin >> f.y;
}
void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}
void Xuat(DIEM a[200], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		Xuat(a[i]);
	}
}
void Nhap(DIEM a[100], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

int KTTrung(DIEM p, DIEM q)
{
	if (p.x == q.x && p.y == q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[200], int n, DIEM p)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTTrung(a[i], p) == 1)
			dem++;
	}
	return dem;
}
int DemDiem(DIEM a[200], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	}
	return dem;
}

int main()
{
	DIEM A[100], P, Q;
	int n;
	Nhap(A, n);
	cout << "Du lieu vua nhap la: " << endl;
	Xuat(A, n);
	int kq=DemDiem(A, n);
	cout << "\nSo luong phan tu khong trung voi phan tu khac la: "<<kq;
	
	return 1;
}
