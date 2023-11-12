#include <iostream>
using namespace std;

struct Ngay
{
    int ngay;
    int thang;
    int nam;
};
typedef struct Ngay ngay;

void Nhap(ngay&);
int kt(ngay);
int ktNhuan(ngay);
int SoNgayToiDaTrongThang(ngay);

void Nhap(ngay& a)
{
    cout << "Nhap ngay: ";
    cin >> a.ngay;
    cout << "Nhap thang: ";
    cin >> a.thang;
    cout << "Nhap nam: ";
    cin >> a.nam;
}

int ktNhuan(ngay a)
{
    if (a.nam % 4 == 0 && a.nam % 100 != 0)
        return 1;
    if (a.nam % 400 == 0)
        return 1;
    return 0;
}

int SoNgayToiDaTrongThang(ngay x)
{
    int ngaythang[12] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
    if (ktNhuan(x) == 1)
        ngaythang[1] = 29;
    return ngaythang[x.thang - 1];
}

int kt(ngay a)
{
    if (a.nam < 1)
        return 0;
    if (a.thang < 1)
        return 0;
    if (a.thang > 12)
        return 0;
    if (a.ngay < 1)
        return 0;
    if (a.ngay > SoNgayToiDaTrongThang(a))
        return 0;
    return 1;
}

int main()
{
    ngay a;
    Nhap(a);
    if (kt(a) == 1)
        cout << "Hop le";
    else
        cout << "Khong hop le";
    return 0;
}
