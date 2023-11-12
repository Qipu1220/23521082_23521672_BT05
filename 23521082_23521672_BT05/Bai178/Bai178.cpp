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
float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);

int main()
{
	DIEM A[100],P,Q;
	int n;
	Nhap(A, n);
	GanNhauNhat(A, n, P, Q);
	cout << "Diem 1: ";
	Xuat(P);
	cout << "\nDiem 2: ";
	Xuat(Q);
	return 1;
}

void Nhap(DIEM& f)
{
	cout << "Nhap x: ";
	cin >> f.x;
	cout << "Nhap y: ";
	cin >> f.y;
}
void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx= " << P.x;
	cout << "\ny= " << P.y;
}
void Nhap(DIEM a[100], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]: "<<endl;
		Nhap(a[i]);
	}
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
				(P.y - Q.y) * (P.y - Q.y));
}

void GanNhauNhat(DIEM a[], int n, DIEM&P, DIEM&Q)
{
	P = a[0];
	Q = a[1];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n ; j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
			{
				P=a[i];
				Q=a[j];
			}
}