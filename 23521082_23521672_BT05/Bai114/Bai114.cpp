#include<iostream>
#include<iomanip>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void NHAP(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
void XUAT(DONTHUC f)
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
int main()
{
	DONTHUC A;
	NHAP(A);
	XUAT(A);
	DONTHUC C;
	C = DaoHam(A);
	cout << "Dao ham cap 1 don thuc la: ";
	XUAT(C);
	return 1;
}