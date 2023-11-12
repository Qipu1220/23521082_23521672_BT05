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


DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN M;
	cout << "Nhap toa do diem: ";
	Nhap(M);
	Xuat(M);
	cout << "\nToa do diem doi xung qua Oxz: ";
	Xuat(DoiXungOxz(M));

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

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}