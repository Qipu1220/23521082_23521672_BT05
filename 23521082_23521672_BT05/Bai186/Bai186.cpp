#include <iostream>
#include <iomanip>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
int ViTriNhoNhat(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);

int main()
{
	PHANSO a[50];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nVi tri phan so nho nhat: " << ViTriNhoNhat(a, n);
	return 0;
}

void Nhap(PHANSO& P)
{
	cout << "Nhap tu: ";
	cin >> P.tu;
	cout << "Nhap mau: ";
	cin >> P.mau;
}

void Xuat(PHANSO P)
{
	cout << P.tu <<"/"<< P.mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << endl;
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8);
		Xuat(a[i]);
	}
}

int SoSanh(PHANSO a, PHANSO b)
{
	float phanso1 = (float)a.tu / a.mau;
	float phanso2 = (float)b.tu / b.mau;
	if (phanso1 > phanso2)
		return 1;
	if (phanso1 < phanso2)
		return -1;
	else
		return 0;
}

int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoSanh(a[i], a[lc]) == -1)
			lc = i;
	}
	return (lc + 1);
}