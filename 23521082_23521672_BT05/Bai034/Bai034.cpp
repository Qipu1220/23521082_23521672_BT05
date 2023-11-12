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
float KhoangCach(DIEMKG P, DIEMKG Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y) + (P.z - Q.z) * (P.z - Q.z));
}
int main()
{
	DIEMKG P, Q;
	Nhap(P);
	Nhap(Q);
	Xuat(P);
	Xuat(Q);
	float kq = KhoangCach(P, Q);
	cout << setw(4);
	cout << setprecision(2);
	cout << "Khoang cach giua hai diem trong KG la: " << kq;
	return 1;
}