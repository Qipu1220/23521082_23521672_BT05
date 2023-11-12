#include<iostream>
#include<iomanip>
using namespace std;

struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC);

void Nhap(SOPHUC& p)
{
	cout << "Nhap thuc: ";
	cin >> p.thuc;
	cout << "Nhap ao: ";
	cin >> p.ao;
}
void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
	}
}
void Xuat(SOPHUC p)
{
	cout << "\nThuc la: " << p.thuc;
	cout << "\nAo la: " << p.ao<<endl;
}
SOPHUC SoThucLonNhat(SOPHUC a[][100], int m, int n)
{
	SOPHUC ln = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j].thuc > ln.thuc)
				ln = a[i][j];
		}
	}
	return ln;
}
int main()
{
	SOPHUC A[100][100], B;
	int m, n;
	Nhap(A, m, n);
	B = SoThucLonNhat(A, m, n);
	cout << "So thuc lon nhat la: " << endl;
	Xuat(B);
	return 1;
}