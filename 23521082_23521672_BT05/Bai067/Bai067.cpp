#include <iostream>
using namespace std;

struct SoPhuc
{
	float a;
	float b;
};
typedef struct SoPhuc phuc;

void Nhap(phuc&);
phuc Hieu(phuc, phuc);

void Nhap(phuc& a)
{
	cout << "Nhap a: ";
	cin >> a.a;
	cout << "Nhap b: ";
	cin >> a.b;
}

phuc Hieu(phuc a, phuc b)
{
	phuc t;
	t.a = a.a - b.a;
	t.b = a.b - b.b;
	return t;
}

int main()
{
	phuc a, b;
	Nhap(a);
	Nhap(b);
	cout << "a - b = ";
	cout << Hieu(a, b).a << " + i*" << Hieu(a, b).b;
	return 0;
}