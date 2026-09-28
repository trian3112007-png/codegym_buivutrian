#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

class NguoiChoi {
public:
    string ten;
    int diem;
};

bool soHopLe(string s) {
    if (s == "") return false;
    for (char c : s)
        if (c < '0' || c > '9') return false;
    return true;
}

int nhapSo(string tb, int min, int max) {
    string s;
    while (true) {
        cout << tb;
        cin >> s;
        if (soHopLe(s)) {
            int x = atoi(s.c_str());
            if (x >= min && x <= max) return x;
        }
        cout << "So khong hop le!\n";
    }
}

int maBaoVe(string ten, int diem) {
    int ma = 8273;
    for (int i = 0; i < ten.length(); i++)
        ma += ten[i] * (i + 1);
    return ma + diem * 37;
}

bool soSanh(NguoiChoi a, NguoiChoi b) {
    return a.diem > b.diem;
}

int trungChuSo(int a, int b) {
    bool x[10] = {}, y[10] = {};
    string s1 = to_string(a), s2 = to_string(b);
    int dem = 0;

    for (char c : s1) x[c - '0'] = true;
    for (char c : s2) {
        int n = c - '0';
        if (x[n] && !y[n]) {
            dem++;
            y[n] = true;
        }
    }
    return dem;
}

int randomSo(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    return uniform_int_distribution<int>(min, max)(gen);
}

void luuBXH(NguoiChoi bxh[], int n) {
    ofstream f("bxh.txt");
    for (int i = 0; i < n; i++)
        f << bxh[i].ten << " "
          << bxh[i].diem << " "
          << maBaoVe(bxh[i].ten, bxh[i].diem) << endl;
}

void themBXH(string ten, int diem, NguoiChoi bxh[], int &n) {
    if (n < 5) {
        bxh[n].ten = ten;
        bxh[n].diem = diem;
        n++;
    }
    else if (diem > bxh[4].diem) {
        bxh[4] = {ten, diem};
    }

    sort(bxh, bxh + n, soSanh);
    luuBXH(bxh, n);
}

int main() {
    NguoiChoi bxh[5];
    int n = 0;

    ifstream f("bxh.txt");
    string ten;
    int diem, ma;

    while (f >> ten >> diem >> ma && n < 5)
        if (ma == maBaoVe(ten, diem)) {
            bxh[n] = {ten, diem};
            n++;
        }
    f.close();

    sort(bxh, bxh + n, soSanh);

    int chon = 0, maxSo = 100, maxLuot = 7;

    while (chon != 6) {
        cout << "\n===== GAME DOAN SO =====\n";
        cout << "1. Choi 1 nguoi\n";
        cout << "2. Choi 2 nguoi\n";
        cout << "3. Speedrun\n";
        cout << "4. Chon do kho\n";
        cout << "5. Bang xep hang\n";
        cout << "6. Thoat\n";

        chon = nhapSo("Chon chuc nang: ", 1, 6);

        // 1 NGUOI
        if (chon == 1) {
            int biMat = randomSo(1, maxSo);
            int luot = 0;
            bool thang = false;

            cout << "\nDoan so tu 1 den " << maxSo << "\n";

            while (luot < maxLuot) {
                int doan = nhapSo("Nhap so: ", 1, maxSo);
                luot++;

                if (doan == biMat) {
                    thang = true;
                    break;
                }

                cout << (doan < biMat ?
                    "-> So LON HON!\n" : "-> So NHO HON!\n");
            }

            if (thang) {
                int diem = (maxLuot - luot + 1) * 100;
                string ten;
                cout << "THANG! Diem: " << diem << endl;
                cout << "Ten: ";
                cin >> ten;
                themBXH(ten, diem, bxh, n);
            }
            else cout << "Het luot! So bi mat: " << biMat << endl;
        }

        // 2 NGUOI
        else if (chon == 2) {
            string p1, p2;
            cout << "Ten P1: "; cin >> p1;
            cout << "Ten P2: "; cin >> p2;

            int minVal = nhapSo("So nho nhat: ", 1, 200);
            int maxVal = nhapSo("So lon nhat: ", minVal + 1, 200);

            cout << "\n" << p1 << " nhap so bi mat\n";
            int biMat1 = nhapSo("Nhap: ", minVal, maxVal);

            cout << "\n" << p2 << " nhap so bi mat\n";
            int biMat2 = nhapSo("Nhap: ", minVal, maxVal);

            bool p1Choi = true;

            while (true) {
                if (p1Choi) {
                    int doan = nhapSo(p1 + " doan: ", minVal, maxVal);

                    if (doan == biMat2) {
                        cout << p1 << " THANG!\n";
                        break;
                    }

                    cout << "Dung " << trungChuSo(biMat2, doan)
                         << " chu so.\n";
                    p1Choi = false;
                }
                else {
                    int doan = nhapSo(p2 + " doan: ", minVal, maxVal);

                    if (doan == biMat1) {
                        cout << p2 << " THANG!\n";
                        break;
                    }

                    cout << "Dung " << trungChuSo(biMat1, doan)
                         << " chu so.\n";
                    p1Choi = true;
                }
            }
        }

        // SPEEDRUN
        else if (chon == 3) {
            int biMat = randomSo(1, 100);
            int luot = 0;
            time_t dau = time(0);

            while (true) {
                int doan = nhapSo("Doan 1-100: ", 1, 100);
                luot++;

                if (doan == biMat) break;

                cout << (doan < biMat ?
                    "-> LON HON!\n" : "-> NHO HON!\n");
            }

            cout << "THANG! "
                 << difftime(time(0), dau)
                 << " giay, " << luot << " luot.\n";
        }

        // DO KHO
        else if (chon == 4) {
            int dk = nhapSo(
                "1.De  2.Vua  3.Kho: ", 1, 3);

            if (dk == 1) {
                maxSo = 50;
                maxLuot = 10;
            }
            else if (dk == 2) {
                maxSo = 100;
                maxLuot = 7;
            }
            else {
                maxSo = 200;
                maxLuot = 5;
            }

            cout << "Da cap nhat!\n";
        }

        // BXH
        else if (chon == 5) {
            cout << "\n===== TOP 5 =====\n";

            if (n == 0)
                cout << "Chua co du lieu!\n";

            for (int i = 0; i < n; i++)
                cout << i + 1 << ". "
                     << bxh[i].ten << " - "
                     << bxh[i].diem << endl;
        }
    }

    return 0;
}