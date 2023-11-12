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
bool ktNhuan(NGAY);


int main()
{
	NGAY a;
	Nhap(a);
	Xuat(a);
	cout << "So ngay toi da cua nam la: " << SoNgayToiDaTrongNam(a);
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

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

bool ktNhuan(NGAY x)
{
	if ((x.nm % 4 == 0 && x.nm % 100 != 0) || x.nm % 400 == 0)
		return true;
	return false;
}