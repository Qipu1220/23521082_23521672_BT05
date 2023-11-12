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
diem DoiXung(diem);

void Nhap(diem& a)
{
	cout << "Nhap tung do: ";
	cin >> a.a;
	cout << "Nhap hoanh do: ";
	cin >> a.b;
}

diem DoiXung(diem a)
{
	diem b;
	b.a = a.a;
	b.b = -a.b;
	return b;
}

int main()
{
	diem a;
	Nhap(a);
	cout << "Diem doi xung qua truc hoanh : ";
	cout << "(" << DoiXung(a).a << ";" << DoiXung(a).b<<")";
	return 0;
}