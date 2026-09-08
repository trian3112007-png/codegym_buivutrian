#include <iostream>
using namespace std;

float cong(float a, float b) {
    return a + b;
}

float tru(float a, float b) {
    return a - b;
}

float nhan(float a, float b) {
    return a * b;
}

float chia(float a, float b) {
    if (b == 0) {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n===== MENU MAY TINH =====\n";
        cout << "1. Cong (+)\n";
        cout << "2. Tru (-)\n";
        cout << "3. Nhan (*)\n";
        cout << "4. Chia (/)\n";
        cout << "5. Thoat\n";
        cout << "=========================\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Nhap 2 so a, b: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1:
                cout << "Ket qua: " << cong(a, b) << endl;
                break;
            case 2:
                cout << "Ket qua: " << tru(a, b) << endl;
                break;
            case 3:
                cout << "Ket qua: " << nhan(a, b) << endl;
                break;
            case 4:
                cout << "Ket qua: " << chia(a, b) << endl;
                break;
            case 5:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le!" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
