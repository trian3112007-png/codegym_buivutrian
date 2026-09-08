#include <iostream>
using namespace std;

void themPhanTu(int a[], int &n, int x, int pos) {
    if (pos < 0 || pos > n) {
        return;
    }
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = x;
    n++;
}

void xoaPhanTu(int a[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

void inMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    inMang(a, n);

    int x, pos;
    cin >> x >> pos;
    themPhanTu(a, n, x, pos);
    inMang(a, n);

    cin >> pos;
    xoaPhanTu(a, n, pos);
    inMang(a, n);

    return 0;
}
