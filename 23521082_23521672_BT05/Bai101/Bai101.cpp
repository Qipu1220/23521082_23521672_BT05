#include <iostream>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
void Thu(NGAY);
bool ktNhuan(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
	Xuat(x);
	cout << endl;
	Thu(x);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm;
}


int SoNgayToiDaTrongThang(NGAY x)
{
	int Thang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		Thang[1] = 29;
	return Thang[x.th - 1];
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
	for (int i = 1; i < x.th; i++)
	{
		NGAY temp = { 1,i,x.nm };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ng);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.nm; i++)
	{
		NGAY temp = { 1,1,i };
		stt += SoNgayToiDaTrongNam(x);
	}
	return (stt + SoThuTuTrongNam(x));
}

void Thu(NGAY x)
{
	int stt = SoThuTu(x);
	switch (stt % 7)
	{
	case 0: cout << "Chu Nhat ";
		break;
	case 1: cout << "Thu Hai ";
		break;
	case 2: cout << "Thu Ba ";
		break;
	case 3: cout << "Thu Tu ";
		break;
	case 4: cout << "Thu Nam ";
		break;
	case 5: cout << "Thu Sau ";
		break;
	case 6: cout << "Thu Bay ";
		break;
	}
}


bool ktNhuan(NGAY x)
{
	if ((x.nm % 4 == 0 && x.nm % 100 != 0) || x.nm % 400 == 0)
		return true;
	return false;
}





