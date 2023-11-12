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
int main()
{
	DONTHUC A;
	NHAP(A);
	return 1;
}