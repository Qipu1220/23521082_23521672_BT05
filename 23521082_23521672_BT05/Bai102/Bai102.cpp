#include <iostream>
using namespace std;

struct ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct ngay NGAY;



void Nhap(NGAY&);
void Xuat(NGAY);
bool ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);
int KhoangCachNgay(NGAY, NGAY);


int main()
{
	NGAY a, b;
	int n;
	Nhap(a);
	Xuat(a);
	Nhap(b);
	Xuat(b);
	cout << "Khoang cach 2 ngay: ";
	cout << KhoangCachNgay(a, b);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.ngay;
	cout << "Nhap thang: ";
	cin >> x.thang;
	cout << "Nhap nam: ";
	cin >> x.nam;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ngay;
	cout << "\nThang: " << x.thang;
	cout << "\nNam: " << x.nam << endl;
}


bool ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0)
		return true;
	if (x.nam % 400 == 0)
		return true;
	return false;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int thang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		thang[1] = 29;
	return thang[x.thang - 1];
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.thang; i++)
	{
		NGAY temp = { 1,i,x.nam };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + x.ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 0; i < x.nam; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int KhoangCachNgay(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}
