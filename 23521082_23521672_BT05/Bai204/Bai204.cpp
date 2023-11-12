#include <cmath>
#include<iostream>
using namespace std;

struct diem {
    double x, y;
};
typedef struct diem DIEM;
struct duongtron {
    DIEM I;
    double R;
};
typedef struct duongtron DUONGTRON;
void Nhap(DIEM p)
{
    cout << "Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
}
void Nhap(DUONGTRON& p)
{
    cout << "Nhap tam: " << endl;
    Nhap(p.I);
    cout << "Nhap ban kinh: ";
    cin >> p.R;
}
float DienTich(DUONGTRON c)
{
    return 3.14 * c.R * c.R;  
}

int main() {
    int n;
    DUONGTRON dt;
    cout << "Nhap so luong duong tron (n): ";
    cin >> n;
    Nhap(dt);
    float kq = DienTich(dt) * n;
    cout << "Dien tich phan mat phang bi che la: " << kq;
    return 0;
}
