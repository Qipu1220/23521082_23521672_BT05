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
void Xuat(SOPHUC);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);
SOPHUC ThucAoDuongDau(SOPHUC [][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "So phuc ao thuc deu duong dau tien trong ma tran: ";
	Xuat(ThucAoDuongDau(a, m, n));
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.thuc;
	cout << "Nhap ao: ";
	cin >> x.ao;
}

void Xuat(SOPHUC x)
{
	cout << "(" << x.thuc << ") + (" << x.ao << ")i";
}


void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
	}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8);
			Xuat(a[i][j]);
		}
		cout << endl;
	}
}

SOPHUC ThucAoDuongDau(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j].ao > 0 && a[i][j].thuc > 0)
				return a[i][j];

		}
	}
	return { 0,0 };
}