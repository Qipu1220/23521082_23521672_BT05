#include <iostream>
using namespace std;

struct Diem
{
	float a;
	float b;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DUONGTRON a[], int&);
void Nhap(DUONGTRON a);
int TuongDoi(DUONGTRON, DUONGTRON);

void Nhap(DUONGTRON a)
{
	cout << "Tam duong tron: ";
	cin >> a.I.a>> a.I.b;
	cout << "Ban kinh: ";
	cin >> a.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	for (int i = 0; i < n; i++)
		Nhap(a[i]);
}

float KhoangCach(DUONGTRON a, DUONGTRON b)
{
	return sqrt((a.I.a - b.I.a) * (a.I.a - b.I.a) + (a.I.b - b.I.b) * (a.I.b - b.I.b));
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1, c2);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}
int ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) != 3)
				flag = 0;
	return flag;
}

int main()
{
	DUONGTRON a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	if (ktDoiMotCatNhau(a, n) == 0)
		cout << "Khong doi mot cat nhau";
	else
		cout << "Doi mot cat nhau";
	return 0;
}