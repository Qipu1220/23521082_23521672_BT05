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

void Xuat(TAMGIAC);
void Xuat(DIEM P);


void Xuat(DIEM P)
{
	cout << "\nx: ";
	cout<< P.x;
	cout << "y: ";
	cout << P.y;
}

void Xuat(TAMGIAC t)
{
	cout << "Toa do dinh A:\n";
	Xuat(t.A);
	cout << "Toa do dinh B:\n";
	Xuat(t.B);
	cout << "Toa do dinh C:\n";
	Xuat(t.C);
}

int main()
{
	TAMGIAC a;
	Xuat(a);
	return 0;
}