#include<iostream>
#include<cmath>
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

float KhoangCach(DIEM p, DIEM q)
{
	return sqrt((q.x - p.x) * (q.x - p.x) + (q.y - p.y) * (q.y - p.y));
}

float TongKhoangCach(TAMGIAC x, DIEM P)
{
	float a = KhoangCach(x.A, P);
	float b = KhoangCach(x.B, P);
	float c = KhoangCach(x.C, P);
	return a + b + c;
}

void Nhap(DIEM& p)
{
	cout << "\nNhap x: ";
	cin >> p.x;
	cout << "\nNhap y: ";
	cin >> p.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}

void Xuat(DIEM p)
{
	cout << "\nX la: " << p.x;
	cout << "\nY la: " << p.y<<endl;
}

void Xuat(TAMGIAC t)
{
	cout << "\nToa do dinh A: ";
	Xuat(t.A);
	cout << "\nToa do dinh B: ";
	Xuat(t.B);
	cout << "\nToa do dinh C: ";
	Xuat(t.C);
}


int main()
{
	TAMGIAC tg;
	DIEM P;
	cout << "Nhap diem P: " << endl;
	Nhap(P);
	cout << "Nhap tam giac: " <<endl;
	Nhap(tg);
	Xuat(tg);
	float kq = TongKhoangCach(tg,P);
	cout << "\nTong khoang cach la: " << kq;
	return 1;
}