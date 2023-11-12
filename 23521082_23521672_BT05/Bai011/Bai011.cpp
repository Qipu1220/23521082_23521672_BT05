#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};

typedef struct TamGiac TAMGIAC;


void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);


int main()
{
	TAMGIAC M;
	Nhap(M);
	cout << "Toa do cac diem cua tam giac vua nhap";
	Xuat(M);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout <<fixed<< setprecision(3);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap toa do diem A: \n";
	Nhap(t.A);
	cout << "Nhap toa do diem B: \n";
	Nhap(t.B);
	cout << "Nhap toa do diem C: \n";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\nToa do diem A: ";
	Xuat(t.A);
	cout << "\nToa do diem B: ";
	Xuat(t.B);
	cout << "\nToa do diem C: ";
	Xuat(t.C);
}