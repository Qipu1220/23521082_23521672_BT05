#include<iostream>
#include<iomanip>

using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;


void Nhap(PHANSO& I);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO);
void Xuat(PHANSO[], int);

int UCLN(int a, int b);
int ktToiGian(PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[], int);
void LietKe(PHANSO[][100], int, int);

int main()
{
	PHANSO C[100][100];
	int m, n;
	Nhap(C, m, n);
	LietKe(C, m, n);
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
	cout << "Tu:" << x.tu << endl;
	cout << "Mau:" << x.mau<<endl;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:"<<endl;
		Xuat(a[i]);
	}
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a -= b;
		else
			b -= a;
	return a + b;
}
int ktToiGian(PHANSO x)
{
	if (UCLN(x.tu, x.mau) == 1)
		return 1;
	return 0;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.tu / x.mau;
	float b = (float)y.tu / y.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

void HoanVi(PHANSO &a, PHANSO &b)
{
	PHANSO temp = a;
	a = b;
	b = temp;
}

void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (SoSanh(a[i], a[j]) == 1)
				HoanVi(a[i],a[j]);
}

void LietKe(PHANSO a[][100], int m, int n)
{
	PHANSO b[100];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToiGian(a[i][j]))
				b[k++] = a[i][j];
	SapTang(b, k);
	Xuat(b, k);
}