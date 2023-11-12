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
int kt(diem);

void Nhap(diem& a)
{
	cout << "Nhap tung do: ";
	cin >> a.a;
	cout << "Nhap hoanh do: ";
	cin >> a.b;
}

int kt(diem P)
{
	if (P.a > 0 && P.b > 0)
		return 1;
	return 0;
}

int main()
{
	diem a;
	Nhap(a);
	if (kt(a) == 1)
		cout << "Thuoc phan tu thu I";
	else
		cout << "Khong thuoc phan tu thu I";
	return 0;
}