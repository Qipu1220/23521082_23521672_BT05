#include<iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC M;
	Nhap(M);
	cout << "\nSo phuc vua nhap: ";
	Xuat(M);
	return 1;
}
void Nhap(SOPHUC& n)
{
	cout << "Nhap Thuc: ";
	cin >> n.Thuc;
	cout << "Nhap Ao: ";
	cin >> n.Ao;	
}
void Xuat(SOPHUC n)
{
	cout << "\nThuc: " << n.Thuc;
	cout << "\nAo: " << n.Ao;
}