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
void Xuat(DIEM);
DIEM TungNhoNhat(TAMGIAC);
int main()
{
	TAMGIAC C;
	cout << "Nhap TAMGIAC: ";
	Nhap(C);
	Xuat(TungNhoNhat(C));
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
void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx= " << P.x;
	cout << "\ny= " << P.y;
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) +
		(Q.y - P.y) * (Q.y - P.y));
}
DIEM TungNhoNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.y < lc.y)
		lc = t.B;
	if ((t.C.y < lc.y))
		lc = t.C;
	return lc;
}
