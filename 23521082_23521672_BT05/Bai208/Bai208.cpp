#include<iostream>
#include<iomanip>

using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG I);
void Nhap(DUONGTHANG a[], int& n);
int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a* d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}
int ktSongSong(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
		if (!ktSongSong(a[i],a[0]))
			return 0;
	return 1;
}

int main()
{
	DUONGTHANG C[100];
	int n;
	cout << "Nhap Mang Duong thang: ";
	Nhap(C,n);
	cout << ktSongSong(C, n);
	return 1;
}

void Nhap(DUONGTHANG I)
{
	cout << "\nNhap a: ";
	cin >> I.a;
	cout << "\nNhap b: ";
	cin >> I.b;
	cout << "\nNhap c: ";
	cin >> I.c;
}
void Nhap(DUONGTHANG a[],int &n)
{

	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

