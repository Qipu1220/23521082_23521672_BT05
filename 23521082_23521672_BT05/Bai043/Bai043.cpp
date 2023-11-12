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
int ktTrung(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A, B;
	cout << "Nhap toa do DIEMKHONGGIAN 1 : ";
	Nhap(A);
	cout << "Nhap toa do DIEMKHONGGIAN 2 : ";
	Nhap(B);
	cout << ktTrung(A, B);
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
int ktTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if (P.x == Q.x && P.y == Q.y && P.z == Q.z)
		return 1;
	return 0;
}