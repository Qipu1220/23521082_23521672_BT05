#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
int ktThuoc(DIEM,DIEM,DIEM,DIEM);
void LietKeTamGiacDocLap(DIEM[],int);

int main()
{
	DIEM a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nLiet ke tam giac doc lap: ";
	LietKeTamGiacDocLap(a, n);

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(a[i]);
	}
}

int ktThuoc(DIEM P, DIEM Q, DIEM R, DIEM S)
{
	float SPQR = ((float)1 / 2) * abs(((Q.x - P.x) * (R.y - P.y) - (R.x - P.x) * (Q.y - P.y)));
	float SSQR = ((float)1 / 2) * abs(((Q.x - S.x) * (R.y - S.y) - (R.x - S.x) * (Q.y - S.y)));
	float SPSR = ((float)1 / 2) * abs(((S.x - P.x) * (R.y - P.y) - (R.x - P.x) * (S.y - P.y)));
	float SPQS = ((float)1 / 2) * abs(((Q.x - P.x) * (S.y - P.y) - (S.x - P.x) * (Q.y - P.y)));
	if (SPQR == SSQR + SPSR + SPQS)
		return 1;
	else
		return 0;
}

void LietKeTamGiacDocLap(DIEM a[],int n)
{
	for(int i=0;i<n-2;i++)
		for(int j=i+1;j<n-1;j++)
			for (int k = j + 1; k < n; k++)
			{
				int flag = 1;
				for (int l = 0; l < n; l++)
					if (l != i && l != j && l != k && ktThuoc(a[i], a[j], a[k], a[l]))
						flag = 0;
				if (flag == 1)
					cout << "\na[" << i << "],a[" << j << "],a[" << k << "].";
			}
}