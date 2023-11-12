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
int SoNgayToiDaTrongThang(NGAY x);
int ktNhuan(NGAY x);

int main()
{
	int nam,stt;
	cin >>nam>> stt;
	Xuat(TimNgay(nam, stt));
	return 1;
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
	return temp;
}