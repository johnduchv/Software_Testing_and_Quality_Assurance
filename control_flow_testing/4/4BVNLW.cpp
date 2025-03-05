#include <iostream>

using namespace std;

double tinhTongTien(int so_ao_thun, int so_quan_jean, int so_tuoi) {
    int gia_ao_thun = 20;
    int gia_quan_jean = 50;

    double tong_tien = so_ao_thun * gia_ao_thun + so_quan_jean * gia_quan_jean;

    if (so_tuoi <= 25) {
        tong_tien *= 0.8;
    }

    return tong_tien;
}

int main() {
    int so_ao_thun, so_quan_jean, so_tuoi;

    cout << "Nhap so luong ao thun: ";
    cin >> so_ao_thun;
    cout << "Nhap so luong quan jean: ";
    cin >> so_quan_jean;
    cout << "Nhap so tuoi: ";
    cin >> so_tuoi;

    double tong_tien = tinhTongTien(so_ao_thun, so_quan_jean, so_tuoi);
    cout << "Tong tien phai tra: " << tong_tien << " USD" << endl;

    return 0;
}
