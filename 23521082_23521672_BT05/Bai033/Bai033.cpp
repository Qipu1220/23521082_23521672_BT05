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
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap toa do DIEMKHONGGIAN : ";
	Nhap(A);
	cout << "Toa do DIEMKHONGGIAN la : ";
	Xuat(A);
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
void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx= " << P.x;
	cout << "\ny= " << P.y;
	cout << "\nz= " << P.z;
}
