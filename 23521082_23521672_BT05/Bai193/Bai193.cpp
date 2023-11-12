#include<iostream>
using namespace std;
struct sophuc
{
	int Thuc;
	int Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC[],int);

int main()
{
	SOPHUC A[100];
	int n;
	cin >> n;
	cout << "Nhap Mang So phuc  : ";
	Nhap(A,n);
	cout << "\Tong cac So phuc trong mang vua nhap: ";
	Xuat(Tong(A, n));
	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[], int n)
{

	for (int i = 0; i < n; i++)
	{
	cout << "Nhap a[" << i << "]: ";
	Nhap(a[i]);
	}
}
void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}
SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i < n; i++)
		s = Tong(s, a[i]);
	return s;
}