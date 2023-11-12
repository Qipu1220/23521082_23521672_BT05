#include<iostream>
#include<iomanip>
using namespace std;

struct diemkg
{
	float x;
	float y;
	float z;
};
typedef struct diemkg DIEMKG;

void Nhap(DIEMKG& n)
{
	cout << "Nhap diemkg: ";
	cin >> n.x;
	cin >> n.y;
	cin >> n.z;
}

void Xuat(DIEMKG n)
{
	cout << "x: " << n.x << "\n";
	cout << "y: " << n.y << "\n";
	cout << "z: " << n.z << "\n";
}
DIEMKG DoiXung(DIEMKG n)
{
	DIEMKG temp;
	temp.x = -n.x;
	temp.y = -n.y;
	temp.z = -n.z;
	return temp;
}
int main()
{
	DIEMKG P;
	Nhap(P);
	Xuat(P);
	DIEMKG C;
	C = DoiXung(P);
	cout << "Diem doi xung qua goc toa do la: ";
	Xuat(C);
	return 1;
}