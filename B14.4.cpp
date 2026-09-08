#include <iostream>
#include <string>
using namespace std;

string xepLoai(float diem) {
    if (diem >= 8.0) return "Gioi";
    else if (diem >= 6.5) return "Kha";
    else if (diem >= 5.0) return "Trung binh";
    else return "Yeu";
}

void inBangXepLoai(float diem[], int n) {
    int demGioi = 0;
    cout << "\n===== BANG XEP LOAI =====\n";
    cout << "STT\tDiem\tXep loai\n";
    for (int i = 0; i < n; i++) {
        string loai = xepLoai(diem[i]);
        cout << i + 1 << "\t" << diem[i] << "\t" << loai << endl;
        if (loai == "Gioi") demGioi++; 
    }
    cout << "==========================\n";
    cout << "So luong sinh vien Gioi: " << demGioi << endl;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    float diem[n];
    cout << "Nhap diem cua cac sinh vien: ";
    for (int i = 0; i < n; i++) {
        cin >> diem[i];
    }

    inBangXepLoai(diem, n);

    return 0;
}
