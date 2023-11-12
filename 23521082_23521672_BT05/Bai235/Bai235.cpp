#include <iostream>
#include<cmath>
using namespace std;

struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);


int main()

{
	SOPHUC A[100][100];
	int m, n;
	cout << "Nhap ma tran so phuc: ";
	Nhap(A, m, n);
	Xuat(A, m, n);

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
	cout << "\nThuc: " << x.thuc;
	cout << "\nAo: " << x.ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "\nNhap hang: ";
	cin >> m;
	cout << "Nhap cot:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "\na[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
		}
}