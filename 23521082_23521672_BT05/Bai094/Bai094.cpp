#include<iostream>
#include<iomanip>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nam;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(NGAY& P)
{
	cout << "Nhap ng: ";
	cin >> P.ng;
	cout << "Nhap th: ";
	cin >> P.th;
	cout << "Nhap nam: ";
	cin >> P.nam;
}
int KT(NGAY M)
{
	if (M.nam % 4 == 0 && M.nam % 100 != 0)
		return 1;
	if (M.nam % 400)
		return 1;
	return 0;
}

void Xuat(NGAY P)
{
	cout << "Ngay la: " << P.ng << endl;
	cout << "Thang la: " << P.th << endl;
	cout << "Nam la: " << P.nam << endl;
}
int main()
{
	NGAY A;
	Nhap(A);
	Xuat(A);
	int kq = KT(A);
	if (kq == 1)
		cout << "Nam cua ngay nay la nam nhuan.";
	else
		cout << "Nam cua ngay nay khong phai la nam nhuan.";
	return 1;
}