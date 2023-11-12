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

	cout << "\nNhap so duong thang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}
bool ktSS(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b - d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return true;
	return false;
}
int KTCSS(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (ktSS(a[i], a[0]))
				flag = 1;
		}
	}
	return flag;
}
int main()
{
	DUONGTHANG C[100];
	int n;
	cout << "Nhap mang cac duong thang: "<<endl;
	Nhap(C, n);
	int kq= KTCSS(C, n);
	if (kq == 1)
		cout << "Co ton cai cap song song." << endl;
	else
		cout << "Khong ton cai cap song song." << endl;
	return 1;
}