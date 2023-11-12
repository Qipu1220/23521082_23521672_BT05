#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct diemkg
{
	float x;
	float y;
	float z;
};
typedef struct diemkg DIEMKG;

struct hinhcau
{
	DIEMKG I;
	float R;
};
typedef struct hinhcau HINHCAU;
void Nhap(DIEMKG& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Nhap(HINHCAU& C)
{
	cout << "\nNhap tam I: ";
	Nhap(C.I);
	cout << "Nhap R: ";
	cin >> C.R;
}
void Xuat(DIEMKG p)
{
	cout << "\nDiem x: "<<p.x;
	cout << "\nDiem y: "<<p.y;
	cout << "\nDiem z: "<<p.z;
}
void Xuat(HINHCAU c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}
float KhoangCach(DIEMKG P, DIEMKG Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y) + (Q.z - P.z) * (Q.z - P.z));
}
float TuongDoi(HINHCAU C1, HINHCAU C2)
{
	float kc = KhoangCach(C1.I, C2.I);
	if (kc == 0 && C1.R == C2.R)
		return 0;
	if (kc > (C1.R + C2.R))
		return 1;
	if (kc == (C1.R + C2.R))
		return 2;
	if (kc < (C1.R + C2.R) && kc > abs(C1.R - C2.R))
		return 3;
	if (kc == abs(C1.R - C2.R))
		return 4;
	return 5;
}
int main()
{
	DIEMKG m1,m2;
	HINHCAU hc1,hc2;

	cout << "Nhap hinh cau 1: ";
	Nhap(hc1);
	cout << "Nhap hinh cau 2: ";
	Nhap(hc2);
	int kq = TuongDoi(hc1, hc2);
	if (kq == 0)
		cout << "Trung nhau.";
	if (kq == 1)
		cout << "Roi nhau.";
	if (kq == 2)
		cout << "Tiep xuc ngoai.";
	if (kq == 3)
		cout << "Cat nhau.";
	if (kq == 4)
		cout << "Tiep xuc trong.";
	if (kq == 5)
		cout << "Chua trong nhau.";
	return 1;
}