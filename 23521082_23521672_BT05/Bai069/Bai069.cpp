#include<iostream>
#include<iomanip>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC& P)
{
	cout << "Nhap thuc: ";
	cin >> P.Thuc;
	cout << "Nhap ao: ";
	cin >> P.Ao;
}
void Xuat(SOPHUC P)
{
	cout << "Phan thuc la: " << P.Thuc<<endl;
	cout << "Phan ao la: " << P.Ao<<endl;
}
SOPHUC Tich(SOPHUC A, SOPHUC B)
{
	SOPHUC temp;
	temp.Thuc = A.Thuc * B.Thuc - A.Ao * B.Ao;
	temp.Ao = A.Thuc * B.Ao + A.Ao * B.Thuc;
	return temp;
}
int main()
{
	SOPHUC A,B;
	Nhap(A);
	Xuat(A);
	Nhap(B);
	Xuat(B);
	SOPHUC C;
	C = Tich(A, B);
	cout << "Tich la: ";
	Xuat(C);
	return 1;
}