#include<iostream>
#include<cmath>
using namespace std;

struct Diem 
{
    float x;
    float y;
};

struct Duongtron 
{
    Diem I;
    float R;
};

bool KT(Duongtron c, Diem p) 
{
    float distance = sqrt(pow(p.x - c.I.x, 2) + pow(p.y - c.I.y, 2));
    return distance <= c.R;
}
int main() {
    Duongtron c;
    Diem p;

    cout << "Nhap toa do x,y va ban kinh cua hinh tron: ";
    cin >> c.I.x >> c.I.y >> c.R;

    cout << "Nhap toa do x,y cua diem: ";
    cin >> p.x >> p.y;

    if (KT(c, p)) {
        cout << "Diem nam trong.\n";
    }
    else {
        cout << "Diem khong nam trong.\n";
    }

    return 0;
}
