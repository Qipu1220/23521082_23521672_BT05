#include<iostream>
using namespace std;
struct sophuc
{
	int Thuc;
	int Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[][100], int&, int&);
int ktDong(SOPHUC[][100], int, int, int);
int DemDong(SOPHUC[][100], int, int);

int main()
{
	SOPHUC M[100][100];
	int m,n;
	Nhap(M,m,n);
	cout << DemDong(M, m, n);
	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}
void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
}

int ktDong(SOPHUC a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j].Thuc * a[d][j].Ao >= 0)
			flag = 0;
	return flag;
}
int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ktDong(a,m,n,i))
			dem++;
	return dem;

}