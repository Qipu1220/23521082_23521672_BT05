#include <iostream>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

DONTHUC Tich(DONTHUC, DONTHUC);
void Nhap(DONTHUC&);

DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

int main()
{
	DONTHUC a, b;
	Nhap(a);
	Nhap(b);
	cout << "Tich cua hai don thuc la: " << Tich(a, b).a << "*x^" << Tich(a, b).n;
}