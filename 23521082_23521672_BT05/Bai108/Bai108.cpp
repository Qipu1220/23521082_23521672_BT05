#include<iostream>
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
NGAY TimNgay(int, int);
NGAY TimNgay(int );
int SoNgayToiDaTrongThang(NGAY x);
int SoNgayToiDaTrongNam(NGAY x);
int ktNhuan(NGAY x);
int SoThuTu(NGAY);
NGAY TruocDo(NGAY x, int k);

int main()
{
	NGAY A;
	int k;
	Nhap(A);
	cin >> k;
	Xuat(TruocDo(A,k));
	return 0;
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
void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ngay;
	cout << "\nThang: " << x.thang;
	cout << "\nNam: " << x.nam;
}
int ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0)
		return 1;
	if (x.nam % 400 == 0)
		return 1;
	return 0;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.thang - 1];
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt -= SoNgayToiDaTrongThang(temp);
		temp.thang++;
	}
	temp.ngay = stt;
	if (temp.ngay < 1 || temp.thang < 1 || temp.nam < 1)
		return { 1,1,1 };
	return temp;
}
NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt -= sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.thang - 1; i++)
	{
		NGAY temp = { 1,i,x.nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ngay);
}
int SoThuTu(NGAY x)
{
	int stt = 0;	
	for (int i = 1; i <= x.nam - 1; i++)
	{
		NGAY temp = {1, 1, i};
		stt += SoNgayToiDaTrongNam(temp);
	}
	return(stt + SoThuTuTrongNam(x));
}
NGAY TruocDo(NGAY x, int k)
{
	int stt = SoThuTu(x);
	stt = stt - k;
	return TimNgay(stt);
}