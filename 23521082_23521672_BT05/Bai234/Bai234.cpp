#include<iostream>
#include<iomanip>
using namespace std;

struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);

void Nhap(SOPHUC& p)
{
	cout << "Nhap thuc: ";
	cin >> p.thuc;
	cout << "Nhap ao: ";
	cin >> p.ao;
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
			cout << "Nhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
	}
}
int main()
{
	SOPHUC A[100][100];
	int m, n;
	Nhap(A,m,n);
	return 1;
}