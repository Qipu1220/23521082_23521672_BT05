#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
int ktTrung(DIEM, DIEM);

int main()
{
	DIEM M, N;
	cout << "Nhap toa do diem thu nhat: ";
	Nhap(M);
	Xuat(M);
	cout << "Nhap toa do diem thu hai: ";
	Nhap(N);
	Xuat(N);
	if (ktTrung(M, N) == 1)
		cout << "Trung";
	else
		cout << "Khong trung";
	
	
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
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}


int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}