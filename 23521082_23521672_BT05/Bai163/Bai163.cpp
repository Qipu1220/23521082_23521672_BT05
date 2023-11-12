#include<iostream>
using namespace std;
struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC Thuong(DONTHUC, DONTHUC);

int main()
{
	DONTHUC f, g;
	cout << "Nhap don thuc 1: ";
	Nhap(f);
	cout << "Nhap don thuc 2: ";
	Nhap(g);
	cout << "Thuong 2 Don thuc vua nhap: ";
	Xuat(Thuong(f, g));
	return 1;
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
DONTHUC Thuong(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}