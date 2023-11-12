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

void Xuat(DIEM P);
void Nhap(DUONGTRON&);
void Nhap(DIEM&);
void Xuat(DUONGTRON);
int TuongDoi(DUONGTRON c1, DUONGTRON c2);
void LietKe(DUONGTRON a[], int n);
void Nhap(DUONGTRON a[], int& n);


int main()
{
	DUONGTRON C[100];
	int n;
	cout << "Nhap n DUONGTRON: ";
	Nhap(C, n);
	cout << "Cac cap duong tron tiep xuc nhau: ";
	LietKe(C, n);
	return 1;
}

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
	cout << "\nNhap ban kinh: ";
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
	cout << "Ban kinh duong tron la: " << c.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
		(P.y - Q.y) * (P.y - Q.y));
}
int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}
void LietKe(DUONGTRON a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) == 2 || TuongDoi(a[i], a[j]) == 4)
			{
				Xuat(a[i]);
				Xuat(a[j]);
				cout << endl;
			}
}
void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

