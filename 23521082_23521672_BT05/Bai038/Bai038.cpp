#include<iostream>
#include<iomanip>

using namespace std;
struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
float KhoangCachGoc(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap toa do DIEMKHONGGIAN : ";
	Nhap(A);
	cout << "Khoang cach goc(P)= " << KhoangCachGoc(A);
	return 1;
}

void Nhap(DIEMKHONGGIAN& f)
{
	cout << "\nNhap x: ";
	cin >> f.x;
	cout << "\nNhap y: ";
	cin >> f.y;
	cout << "\nNhap z: ";
	cin >> f.z;
}
float KhoangCachGoc(DIEMKHONGGIAN P)
{
	return sqrt(P.x * P.x + P.y * P.y + P.z * P.z);
}