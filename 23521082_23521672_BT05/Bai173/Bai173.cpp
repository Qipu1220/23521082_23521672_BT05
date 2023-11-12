#include<iostream>
#include<iomanip>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[100], int&);

int main()
{
	DIEM A[100];
	int n;
	Nhap(A, n);
	return 1;
}

void Nhap(DIEM& f)
{
	cout << "\nNhap x: ";
	cin >> f.x;
	cout << "\nNhap y: ";
	cin >> f.y;
}
void Xuat(DIEM)
{

}
void Nhap(DIEM a[100], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
