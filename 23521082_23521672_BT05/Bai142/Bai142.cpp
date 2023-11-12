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

void Nhap(TAMGIAC&);
void Nhap(DIEM &P);
DIEM HoanhLonNhat(TAMGIAC);

void Nhap(DIEM& P)
{
	cout << "\nx: ";
	cin>> P.x;
	cout<< "y: ";
	cin>> P.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Toa do dinh A:\n";
	Nhap(t.A);
	cout << "Toa do dinh B:\n";
	Nhap(t.B);
	cout << "Toa do dinh C:\n";
	Nhap(t.C);
}

DIEM HoanhLonNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x > lc.x)
		lc = t.C;
	return lc;
}

int main()
{
	TAMGIAC a;
	Nhap(a);
	cout<<HoanhLonNhat(a).x;
	return 0;
}