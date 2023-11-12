#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

struct Diem
{
	float a;
	float b;
};
typedef struct Diem DIEM;

void Nhap(DUONGTHANG[], int&);
void Nhap(DUONGTHANG&);
void Nhap(DIEM& p);
DUONGTHANG GanDiemNhat(DUONGTHANG[], int, DIEM);
float KhoangCach(DUONGTHANG d, DIEM p);

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Nhap(DIEM& p)
{
	cout << "Nhap tung do: ";
	cin >> p.a;
	cout << "Nhap hoanh do: ";
	cin >> p.b;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

float KhoangCach(DUONGTHANG d, DIEM p)
{
	float tu = abs(d.a * p.a + d.b * p.a + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return (float)tu / mau;
}

DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCach(a[i], P) < KhoangCach(lc, P))
			lc = a[i];
	return lc;
}

int main()
{
	int n;
	DUONGTHANG a[100];
	Nhap(a, n);
	DIEM P;
	Nhap(P);
	cout << "Diem gan diem P nhat la: " << GanDiemNhat(a, n, P).a << "*x + " << GanDiemNhat(a, n, P).b << "*y = " << GanDiemNhat(a, n, P).c;
	return 0;
}