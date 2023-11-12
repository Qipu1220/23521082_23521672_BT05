#include<iostream>
#include<iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC operator-(DATHUC, DATHUC);

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
	for (int i = p.n; i > 0; i--)
	{
		cout << p.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
	cout << p.a[0];
}
DATHUC operator-(DATHUC p, DATHUC q)
{
	DATHUC temp;
	if (p.n > q.n)
	{
		for (int i = p.n; i > q.n; i--)
		{
			temp.n = p.n;
			temp.a[i] = p.a[i];
		}
		for (int i = p.n; i >= 0; i--)
		{
			temp.a[i] = p.a[i] - q.a[i];
		}
	}
	else
	{
		for (int i = q.n; i > p.n; i--)
		{
			temp.n = q.n;
			temp.a[i] = q.a[i];
		}
		for (int i = p.n; i >= 0; i--)
		{
			temp.a[i] = p.a[i] - q.a[i];
		}
	}

	return temp;
}

int main()
{
	DATHUC dt1, dt2;
	cout << "Nhap da thuc 1: " << endl;
	Nhap(dt1);
	cout << "Da thuc vua nhap la: " << endl;
	Xuat(dt1);
	cout << "\nNhap da thuc 2: " << endl;
	Nhap(dt2);
	cout << "Da thuc vua nhap la: " << endl;
	Xuat(dt2);
	cout << "Dap an la: " << endl;
	Xuat(dt1 - dt2);
	return 1;
}