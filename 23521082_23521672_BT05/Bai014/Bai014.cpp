#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM& n)
{
	cout << "Nhap diem: ";
	cin >> n.x;
	cin >> n.y;
}

void Xuat(DIEM n)
{
	cout << "x: " << n.x << "\n";
	cout << "y: " << n.y << "\n";
}
int main()
{
	DIEM m;
	Nhap(m);
	Xuat(m);
	return 1;
}