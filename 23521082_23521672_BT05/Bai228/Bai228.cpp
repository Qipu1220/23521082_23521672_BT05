#include<iostream>
#include<iomanip>

using namespace std;
struct phanso
{
	float tu;
	float mau;
};
typedef struct phanso PHANSO;


void Nhap(PHANSO& I);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO);
void Xuat(PHANSO a[][100], int m, int n);


int main()
{
	PHANSO C[100][100];
	int m, n;
	Nhap(C, m, n);
	Xuat(C, m, n);
	return 1;
}

void Nhap(PHANSO& I)
{
	cout << "\nNhap x: ";
	cin >> I.tu;
	cout << "\nNhap y: ";
	cin >> I.mau;
}


void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n ";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO x)
{
	cout << "Tu:" << x.tu<<endl;
	cout << "Mau:" <<x.mau;
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << " a[" << i << "][" << j << "]:\n ";
			Xuat(a[i][j]);
			cout << endl;
		}
}
