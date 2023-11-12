#include<iostream>
#include<iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM& n)
{
	cout << "Nhap diem: ";
	cin >> n.x;
	cin >> n.y;
}

void Xuat(DIEM n)
{
	cout << "x: " << n.x << "\n";
	cout << "y: " << n.y << "\n";
}
float KhoangCachY(DIEM P, DIEM Q)
{
	return abs(Q.y - P.y);
}
int main()
{
	DIEM P,Q;
	Nhap(P);
	Nhap(Q);
	Xuat(P);
	Xuat(Q);
	float kq = KhoangCachY(P, Q);
	cout << setw(4);
	cout << setprecision(3);
	cout << "Khoang cach giua 2 diem theo phuong Oy la: " << kq;
	return 1;
}