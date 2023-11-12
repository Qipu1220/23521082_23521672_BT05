#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float a;
	float b;
};
typedef struct Diem diem;

void Nhap(diem&);
float KhoangCach(diem, diem);

void Nhap(diem& a)
{
	cout << "Nhap tung do: ";
	cin >> a.a;
	cout << "Nhap hoanh do: ";
	cin >> a.b;
}

float KhoangCach(diem a, diem b)
{
	float k;
	k = sqrt((b.a - a.a) * (b.a - a.a) + (b.b - a.b) * (b.b - a.b));
	return k;
}

int main()
{
	diem a, b;
	Nhap(a);
	Nhap(b);
	cout << "Khoang cach giua 2 diem la: " << setprecision(2) << fixed << KhoangCach(a, b);
	return 0;
}