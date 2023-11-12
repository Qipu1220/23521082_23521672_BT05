#include <iostream>
using namespace std;

struct SoPhuc
{
	float a;
	float b;
};
typedef struct SoPhuc SOPHUC;

void Xuat(SOPHUC a[], int&);
void Xuat(SOPHUC a);

void Xuat(SOPHUC a)
{
	cout << "a= ";
	cout<< a.a;
	cout << "b= ";
	cout << a.b;
}

void Xuat(SOPHUC a[], int& n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}

int main()
{
	SOPHUC a[100];
	int n;
	Xuat(a, n);
	return 0;
}