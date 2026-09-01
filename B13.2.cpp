#include <iostream>
using namespace std;

bool laSoChan(int n) {
    return n % 2 == 0;
}

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool laNamNhuan(int nam) {
    return ( (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0) );
}

int main() {
    int n, nam;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    cout << "Nhap mot nam: ";
    cin >> nam;

    cout << "So chan: " << (laSoChan(n) ? "Co" : "Khong") << endl;
    cout << "So nguyen to: " << (laSoNguyenTo(n) ? "Co" : "Khong") << endl;
    cout << "Nam nhuan: " << (laNamNhuan(nam) ? "Co" : "Khong") << endl;

    return 0;
}
