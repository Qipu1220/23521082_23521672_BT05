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
int KT(DIEM n)
{
	if (n.x < 0 && n.y < 0)
		return 1;
	return 0;
}
int main()
{
	DIEM P;
	Nhap(P);
	Xuat(P);
	if(KT(P) == 1) 
		cout << "Diem thuoc phan thu III " << endl;
	else
		cout << "Diem khong thuoc phan thu III " << endl;
	return 1;
}