#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

float TinhGiaTri(DATHUC f, float x0)
{
	float s = f.a[0];
	float t = 1;
	for (int i = 1; i <= f.n; i++)
	{
		t = t * x0;
		s = s + f.a[i] * t;
	}
	return s;
}

int main()
{
	DATHUC f, g;
	Nhap(f);
	float x0;
	cin >> x0;
	cout << "Gia tri tai x0 la: " << x0;
	return 0;
}
