#include <iostream>
#include <iomanip>
using namespace std; 

struct dathuc
{
	float a[100];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC f;
	Nhap(f);
	Xuat(f);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	cout << "\nBac cao nhat: " << f.n << endl;
	for (int i = f.n; i >= 0; i--)
	{
		cout << f.a[i];
		if (i != 0)
		{
			cout << "x^" << i<<setw(3)<< "+" << setw(3);
		}
	}
}