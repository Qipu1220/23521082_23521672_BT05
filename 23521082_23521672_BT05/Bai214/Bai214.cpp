#include<iostream>
#include<iomanip>

using namespace std;

struct ngay
{
	int ng;
	int th;
	int n;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Nhap(NGAY[], int&);
void Xuat(NGAY);

void Nhap(NGAY& p)
{
	cout << "Nhap ngay: ";
	cin >> p.ng;	
	cout << "Nhap thang: ";
	cin >> p.th;	
	cout << "Nhap nam: ";
	cin >> p.n;
}
void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay[" << i << "]:\n";
		Nhap(a[i]);
	}
}
void Xuat(NGAY p)
{
	cout << "\nNgay la: " << p.ng;
	cout << "\nThang la: " << p.th;
	cout << "\nNam la: " << p.n;
}
int main()
{
	NGAY a[400];
	int n;
	Nhap(a,n);
	return 1;
}