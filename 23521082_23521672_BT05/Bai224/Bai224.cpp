#include<iostream>
#include<iomanip>

using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
void Nhap(DUONGTRON&);
int KTThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}
void Nhap(DUONGTRON& o)
{
	cout << "Nhap tam:"<<endl;
	Nhap(o.I);
	cout << "\nNhap R: ";
	cin >> o.R;
}

float KhoangCach(DIEM p, DIEM q)
{
	return sqrt((q.x - p.x) * (q.x - p.x) + (q.y - p.y) * (q.y - p.y));
}
int KTThuoc(DUONGTRON c, DIEM p)
{
	float kc = KhoangCach(c.I, p);
	if (kc <= c.R)
		return 1;
	else
		return 0;
}
int DemDiem(DIEM a[][100], int m, int n, DUONGTRON c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KTThuoc(c, a[i][j])==1)
				dem++;
		}
	}
	return dem;
}
int main()
{
	DIEM C[100][100];
	DUONGTRON O;
	int m, n;
	cout << "Nhap duong tron: " << endl;
	Nhap(O);
	cout << "Nhap diem: " << endl;
	Nhap(C, m, n);
	int kq = DemDiem(C, m, n, O);
	cout << "So diem nam trong duong tron la: "<< kq;
	return 1;
}