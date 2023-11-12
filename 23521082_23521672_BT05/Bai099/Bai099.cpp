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
bool KTNhuan(NGAY M)
{
	if (M.nam % 4 == 0 && M.nam % 100 != 0)
		return true;
	if (M.nam % 400)
		return true;
	return false;
}
int SoNgayToiDaTrongThang(NGAY M)
{
	int NgayToiDa[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};
	if (KTNhuan(M))
		NgayToiDa[1] = 29;
	return NgayToiDa[M.th - 1];
}
int SoNgayToiDaTrongNam(NGAY M)
{
	if (KTNhuan(M))
		return 366;
	return 365;
}
int SoThuTuTrongNam(NGAY M)
{
	int stt = 0;
	for (int i = 1; i <= M.th - 1; i++)
	{
		NGAY temp = { 1,i,M.nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + M.ng);
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
	int kq = SoThuTuTrongNam(A);
	cout << "So thu tu trong nam la: " << kq;
	return 1;
}