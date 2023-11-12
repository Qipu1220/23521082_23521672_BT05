#include <iostream>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian tg;

void Nhap(tg&);
tg TruocDo(tg);

void Nhap(tg& a)
{
	cout << "Nhap gio: ";
	cin >> a.Gio;
	cout << "Nhap phut: ";
	cin >> a.Phut;
	cout << "Nhap giay: ";
	cin >> a.Giay;
}

tg TruocDo(tg a)
{
	a.Giay--;
	if (a.Giay < 0)
	{
		a.Giay = 59;
		a.Phut--;
		if (a.Phut < 0)
		{
			a.Gio--;
			if (a.Gio < 0)
			{
				a.Gio = 23;
				a.Phut = 59;
			}
		}
	}
	return a;
}

int main()
{
	tg a;
	Nhap(a);
	cout << "Thoi gian o giay truoc do la: ";
	cout << TruocDo(a).Gio << "h" << TruocDo(a).Phut << "m" << TruocDo(a).Giay << "s";
	return 0;
}