#include <iostream>
using namespace std;

// Hàm nhập mảng
void nhapMang(int a[], int n) {
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int timMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

float tinhTrungBinh(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return (float)tong / n;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    nhapMang(a, n);

    cout << "Gia tri lon nhat: " << timMax(a, n) << endl;
    cout << "Gia tri nho nhat: " << timMin(a, n) << endl;
    cout << "Gia tri trung binh: " << tinhTrungBinh(a, n) << endl;

    return 0;
}
