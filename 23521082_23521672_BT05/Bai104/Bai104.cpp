#include <iostream>
using namespace std;

struct NGAY {
    int ngay;
    int thang;
    int nam;
};

bool KTNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int NgayTrongThang(int thang, int nam) {
    int NgayTrongThang[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (KTNhuan(nam) && thang == 2) {
        return 29;
    }
    return NgayTrongThang[thang];
}

NGAY TimNgay(int stt, int nam) {
    int thang = 1;
    while (stt > NgayTrongThang(thang, nam)) {
        stt -= NgayTrongThang(thang, nam);
        thang++;
    }
    return { stt, thang, nam };
}

int main() {
    int stt, nam;
    cout << "Nhap stt: ";
    cin >> stt;
    cout << "Nhap nam: ";
    cin >> nam;
    NGAY NGAY = TimNgay(stt, nam);
    cout << "Ngay do la: " << NGAY.ngay << "/" << NGAY.thang << "/" << NGAY.nam << endl;
    return 0;
}
