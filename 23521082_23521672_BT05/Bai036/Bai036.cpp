#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN M, N;
	cout << "Nhap toa do diem thu nhat: ";
	Nhap(M);
	Xuat(M);
	cout << "\nNhap toa do diem thu hai: ";
	Nhap(N);
	Xuat(N);
	cout << "\nKhoang cach theo phuong Y: "<< fixed << setprecision(2)<<KhoangCachY(M,N);
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
	cout << "Nhap cao do: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}

float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}

