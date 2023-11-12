#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungGoc(DIEM&);

int main()
{
	DIEM M;
	Nhap(M);
	cout << "Toa do diem moi nhap: ";
	Xuat(M);
    DoiXungGoc(M);
	cout << "\nToa do diem doi xung: ";
	Xuat(M);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

DIEM DoiXungGoc(DIEM& P)
{
	P.x = -P.x;
	P.y = -P.y;
	return P;
}