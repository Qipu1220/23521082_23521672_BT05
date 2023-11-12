#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
DIEM TrongTam(TAMGIAC);

int main()
{
	TAMGIAC t;
	Nhap(t);
	Xuat(t);
	cout << "\nTrong tam cua tam giac: ";
	Xuat(TrongTam(t));
	return 0;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap hoanh do: ";
	cin >> I.x;
	cout << "Nhap tung do: ";
	cin >> I.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap diem A: ";
	Nhap(t.A);
	cout << "Nhap diem B: ";
	Nhap(t.B);
	cout << "Nhap diem C: ";
	Nhap(t.C);
}

void Xuat(DIEM I)
{
	cout << "\nHoanh do: " << I.x;
	cout << "\nTung do: " << I.y;
}

void Xuat(TAMGIAC t)
{
	cout << "A: ";
	Xuat(t.A);
	cout << "\nB: ";
	Xuat(t.B);
	cout << "\nC: ";
	Xuat(t.C);
}

DIEM TrongTam(TAMGIAC t)
{
	DIEM temp;
	temp.x = (t.A.x + t.B.x + t.C.x) / 3;
	temp.y = (t.A.y + t.B.y + t.C.y) / 3;
	return temp;
}