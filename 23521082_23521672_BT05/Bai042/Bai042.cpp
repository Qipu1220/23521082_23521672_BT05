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

DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = P.y;
	temp.z = P.z;
	return temp;
}

int main()
{
	DIEMKHONGGIAN a, b;
	Nhap(a);
	cout << setprecision(2) << "Diem doi xung qua mat phang Oyz  : (" <<DoiXungOyz(a).x<<","<<DoiXungOyz(a).y<<","<<DoiXungOyz(a).z<<")";
	return 1;
}