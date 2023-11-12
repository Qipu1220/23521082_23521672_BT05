#include<iostream>
using namespace std;
struct NGAY
{
	int ngay;
	int thang;
	int nam;
};
typedef struct NGAY NGAY;

void Nhap(NGAY&);
int SoSanh(NGAY, NGAY);

int main()
{
	NGAY A, B;
	Nhap(A);
	Nhap(B);
	cout << SoSanh(A, B);
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "Nhap Ngay: ";
	cin >> x.ngay;
	cout << "Nhap Thang: ";
	cin >> x.thang;
	cout << "Nhap Nam: ";
	cin >> x.nam;
}

int SoSanh(NGAY x, NGAY y)
{
	if (x.nam > y.nam)
		return 1;
	if (x.nam < y.nam)
		return -1;
	if (x.thang > y.thang)
		return 1;
	if (x.thang < y.thang)
		return -1;
	if (x.ngay > y.ngay)
		return 1;
	if (x.ngay < y.ngay)
		return -1;
	return 0;
}