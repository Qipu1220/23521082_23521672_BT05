#include <iostream>
using namespace std;

struct SoPhuc
{
	int a;
	int b;
};
typedef struct SoPhuc SOPHUC;
void Nhap(SOPHUC a)
{
	cout << "Nhap a : ";
	cin >> a.a;
	cout << "Nhap b: ";
	cin >> a.b;
}

SOPHUC ThucAoAmCuoi(SOPHUC[][100], int, int);


void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			Nhap(a[i][j]);
		}

}

SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
		for (int j = n - 1; j >= 0; j--)
			if (a[i][j].a < 0 && a[i][j].b < 0)
				return a[i][j];
	return { 0,0 };
}

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So thuc am cuoi cung : " << ThucAoAmCuoi(a, m, n).a << "+" << ThucAoAmCuoi(a, m, n).b << "*i";
	return 0;
}