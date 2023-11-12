#include <iostream>
#include <iomanip>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
float KhoangCachZ(DIEMKHONGGIAN, DIEMKHONGGIAN);

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

float KhoangCachZ(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.z - P.z);
}

int main()
{
	DIEMKHONGGIAN a,b;
	Nhap(a);
	Nhap(b);
	cout <<setprecision(2)<< "Khoang cach theo phuong z cua 2 diem la  : " << KhoangCachZ(a, b);
	return 1;
}