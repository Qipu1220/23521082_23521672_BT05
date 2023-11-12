#include<iostream>
#include<iomanip>
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
DIEM DoiXung(DIEM n)
{
	DIEM temp;
	temp.x = n.y;
	temp.y = n.x;
	return temp;
}
int main()
{
	DIEM P, Q;
	Nhap(P);
	Nhap(Q);
	Xuat(P);
	Xuat(Q);
	DIEM C;
	C = DoiXung(P);
	cout << "Diem doi xung qua truc thu nhat y la: " << endl;
	Xuat(C);

	return 1;
}