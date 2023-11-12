#include<iostream>
#include<iomanip>

using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DUONGTHANG I);
void Nhap(DUONGTHANG a[], int& n);
DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp = { 0,0 };
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}
int ktDongQui(DUONGTHANG a[], int n)
{
	for(int i=0;i<=n-2;i++)
		for(int j=i+1;j<n;j++)
			if (ktCat(a[i], a[j]))
			{
				DIEM PP = GiaoDiem(a[i], a[j]);
				for (int k = 0; k < n; k++)
					if (k != i && k != j && ktThuoc(a[k], PP))
						return 1;
			}
	return 0;
}

int main()
{
	DUONGTHANG C[100];
	int n;
	cout << "Nhap Mang Duong thang: ";
	Nhap(C, n);
	cout<<ktDongQui(C, n);
	return 1;
}

void Nhap(DUONGTHANG I)
{
	cout << "\nNhap a: ";
	cin >> I.a;
	cout << "\nNhap b: ";
	cin >> I.b;
	cout << "\nNhap c: ";
	cin >> I.c;
}
void Nhap(DUONGTHANG a[], int& n)
{

	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

