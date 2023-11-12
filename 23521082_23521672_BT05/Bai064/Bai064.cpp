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

void Nhap(SOPHUC& P)
{
	cout << "Nhap thuc: ";
	cin >> P.Thuc;
	cout << "Nhap ao: ";
	cin >> P.Ao;
}
int main()
{
	SOPHUC A;
	Nhap(A);
	return 1;
}