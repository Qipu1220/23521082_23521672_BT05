#include<iostream>
#include<iomanip>

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
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
int KiemTra(TAMGIAC t);

int main()
{
	TAMGIAC C;
	cout << "Nhap TAMGIAC: ";
	Nhap(C);
	cout << KiemTra(C);
	return 1;
}

void Nhap(TAMGIAC& t)
{
	cout << "\nNhap dinh A: ";
	Nhap(t.A);
	cout << "\nNhap dinh B: ";
	Nhap(t.B);
	cout << "\nNhap dinh C: ";
	Nhap(t.C);
}
void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) +
		(Q.y - P.y) * (Q.y - P.y));
}
int KiemTra(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	if (a + b > c && b + c > a && a + c > b)
		return 1;
	return 0;
}
