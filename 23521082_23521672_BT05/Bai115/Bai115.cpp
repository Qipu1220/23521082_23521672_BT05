#include <iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC DaoHam(DONTHUC);
DONTHUC DaoHam(DONTHUC, int);

int main()
{
	DONTHUC a;

	Nhap(a);
	cout << "Don thuc la: ";
	Xuat(a);

	int k;
	cout << "\nDao ham cap: ";
	cin >> k;

	cout << "Dao ham cap " << k << " la: ";
	Xuat(DaoHam(a, k));

	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}


DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

DONTHUC DaoHam(DONTHUC f, int k)
{
	DONTHUC temp = f;
	for (int i = 1; i <= k; i++)
		temp=DaoHam(temp);
	return temp;
}