#include<iostream>
#include<iomanip>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

void Nhap(HONSO& P)
{
	cout << "Nhap Nguyen: ";
	cin >> P.Nguyen;
	cout << "Nhap Tu: ";
	cin >> P.Tu;
	cout << "Nhap Mau: ";
	cin >> P.Mau;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void RutGon(HONSO& P)
{
	int kq = UCLN(P.Tu, P.Mau);
	P.Tu = P.Tu / kq;
	P.Mau = P.Mau / kq;
	P.Nguyen = P.Nguyen / kq;
	P.Tu = P.Tu % P.Mau;
}
void Xuat(HONSO P)
{
	cout << "Nguyen la: " << P.Nguyen<<endl;
	cout << "Tu la: " << P.Tu<<endl;
	cout << "Mau la: " << P.Mau<<endl;
}
int main()
{
	HONSO A, B;
	Nhap(A);
	Xuat(A);
	Nhap(B);
	Xuat(B);
	return 1;
}