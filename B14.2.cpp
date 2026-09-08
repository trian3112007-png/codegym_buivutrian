#include <iostream>
using namespace std;
bool laSoNguyenTo(int n){
    if(n<2) return false;
    for (int i = 2; i<n/2;i++){
        if (n%i == 0){
            return false;
            break;
        }
    }
    return false;
}

void inSoNguyenTo(int a[], int n) {
    cout << "Cac so nguyen to trong mang: ";
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    inSoNguyenTo(a, n);

    return 0;
}

