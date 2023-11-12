#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point center;
    double radius;
};

Point findCommonPoint(vector<Circle>&);

int main() {
    int n;
    cout << "Nhap so luong duong tron (n): ";
    cin >> n;

    vector<Circle> circles(n);
    cout << "Nhap thong tin cho cac duong tron:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Duong tron " << i + 1 << " - Toa do tam (x y): ";
        cin >> circles[i].center.x >> circles[i].center.y;
        cout << "Duong tron " << i + 1 << " - Ban kinh: ";
        cin >> circles[i].radius;
    }

    Point commonPoint = findCommonPoint(circles);

    if (commonPoint.x != -1 && commonPoint.y != -1) {
        cout << "Diem chung la: (" << commonPoint.x << ", " << commonPoint.y << ")" << endl;
    }

    return 0;
}

Point findCommonPoint(vector<Circle>& circles) {
    // Lấy tọa độ của tâm của đường tròn đầu tiên
    Point commonPoint = circles[0].center;

    // Duyệt qua các đường tròn còn lại
    for (int i = 1; i < circles.size(); ++i) {
        double d = sqrt(pow(circles[i].center.x - commonPoint.x, 2) +
            pow(circles[i].center.y - commonPoint.y, 2));

        // Kiểm tra nếu khoảng cách từ tâm của đường tròn thứ i đến điểm chung
        // lớn hơn tổng bán kính của các đường tròn trước đó, thì không tồn tại điểm chung
        if (d > circles[i].radius) {
            cout << "Khong ton tai diem chung" << endl;
            return Point{ -1, -1 };
        }

        // Cập nhật tọa độ của điểm chung nếu cần
        double ratio = (d + circles[i].radius) / (2 * d);
        commonPoint.x = circles[i].center.x + ratio * (commonPoint.x - circles[i].center.x);
        commonPoint.y = circles[i].center.y + ratio * (commonPoint.y - circles[i].center.y);
    }

    return commonPoint;
}