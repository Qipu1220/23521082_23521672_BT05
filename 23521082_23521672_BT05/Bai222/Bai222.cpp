#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM[], int&, int&);
void Nhap(DIEM a);
int TanSuat(DIEM[][100], int, int, DIEM);
int DemKhongTrung(DIEM[][100], int, int);
bool ktTrung(DIEM, DIEM);

void Nhap(DIEM a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cin >> m>>n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Nhap(a[i][j]);
}

bool ktTrung(DIEM a, DIEM P)
{
	if (a.x == P.x && a.y == P.y)
		return true;
	return false;
}

int TanSuat(DIEM a[][100], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrung(a[i][j], P))
				dem++;
	return dem;
}

int DemKhongTrung(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) == 1)
				dem++;
	return dem;
}

int main()
{
	DIEM a[100][100];
	int n,m;
	Nhap(a, m, n);
	cout << "So diem khong trung la: " << DemKhongTrung(a, m, n);
}