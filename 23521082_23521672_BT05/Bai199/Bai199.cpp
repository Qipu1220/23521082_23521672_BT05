#include<iostream>
#include<iomanip>

using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: "<<endl;
	cin >> c.R;
}
void Xuat(DIEM P)
{
	cout << "x=" << P.x << endl;
	cout << "y=" << P.y << endl;
}

void Xuat(DUONGTRON c)
{
	cout << "Tam duong tron la: " << endl;
	Xuat(c.I);
	cout << "Ban kinh duong tron la: " << c.R<<endl;
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
void Nhap(DUONGTRON a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}
float KhoangCachGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.I);
	return abs(kc - c.R);
}
int KTQuaGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.I);

	if (kc == c.R)
		return 1;
	return 0;
}
int KTTT(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTQuaGoc(a[i]) == 1)
			flag = 1;
	}
	return flag;
}

int main()
{
	DUONGTRON C[200];
	int n;
	cout << "Nhap so duong tron: "<<endl;
	Nhap(C, n);
	Xuat(C, n);
	int flag = KTTT(C, n);
	if (flag == 1)
		cout << "Co mot duong thang di qua goc toa do.";
	cout << "Khong co mot duong thang di qua goc toa do.";
	return 1;
}