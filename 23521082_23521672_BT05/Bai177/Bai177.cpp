#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM[], int&);
void Nhap(DIEM a);

void Nhap(DIEM a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

float KhoangCach(DIEM a)
{
	return sqrt(a.x * a.x + a.y * a.y);
}

DIEM GanNhat(DIEM a[], int n)
{
	float t = KhoangCach(a[0]);
	DIEM k = a[0];
	for (int i=1;i<n;i++)
		if (KhoangCach(a[i]) < t)
		{
			k = a[i];
			t = KhoangCach(a[i]);
		}
		
}

int main()
{
	DIEM a[100];
	int n;
	Nhap(a,n);
	cout << "Diem gan goc toa do nhat la: (" << GanNhat(a, n).x << ";" << GanNhat(a, n).y<<")";
}