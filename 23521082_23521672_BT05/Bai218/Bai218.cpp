#include<iostream>
#include<iomanip>

using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM& I);
void Nhap(DIEM[][100],int&,int&);


int main()
{
	DIEM C[100][100];
	int n,m;
	Nhap(C, m,n);
	return 1;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "\nNhap y: ";
	cin >> I.y;
}


void Nhap(DIEM a[][100],int &m, int& n)
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

