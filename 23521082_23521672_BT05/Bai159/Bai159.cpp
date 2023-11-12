#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct dathuc
{
	float a[100];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC& p)
{
	cout << "Nhap bac cua da thuc: ";
	cin >> p.n;
	for (int i = p.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> p.a[i];
	}

}

void Xuat(DATHUC p)
{
	cout << setw(4);
	cout << setprecision(2);
	for (int i = p.n; i >= 1; i--)
	{
		cout << p.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
	cout << p.a[0];
}

void DieuChinh(DATHUC p)
{
	int bac = -1e9;
	for (int i = p.n; i >= 1; i--)
	{
		if (p.a[i] != 0)
		{
			cout << "\nDa thuc co bac la: " << i;
			break;
		}
		cout << "\nDa thuc co bac la: " << p.n;
	}
}
int main()
{
	DATHUC H;
	Nhap(H);
	cout << "\nDa thuc vua nhap la: ";
	Xuat(H);
	DieuChinh(H);
	return 1;
}