#include <iostream>
using namespace std;

double tinhTienHang(int soLuong, double donGia, double phanTramGiam = 0) {
    double tongTien = soLuong * donGia;
    double giam = tongTien * phanTramGiam / 100;
    return tongTien - giam;
}

int main() {
    int soLuong;
    double donGia;

    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;

    cout << "Khong giam gia: " 
         << tinhTienHang(soLuong, donGia) << endl;

    cout << "Giam 10%: " 
         << tinhTienHang(soLuong, donGia, 10) << endl;

    cout << "Giam 50%: " 
         << tinhTienHang(soLuong, donGia, 50) << endl;

    return 0;
}
