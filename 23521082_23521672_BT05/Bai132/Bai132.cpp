#include <iostream>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

float TheTich(HINHCAU);
void Nhap(DIEMKHONGGIAN& P);
void Nhap(HINHCAU& c);

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

float TheTich(HINHCAU c)
{
	return float((float)4 / 3 * 3.14 * c.R * c.R* c.R);
}

int main()
{
	HINHCAU a;
	Nhap(a);
	cout << "The tich hinh cau la: " << TheTich(a);
	return 0;
}