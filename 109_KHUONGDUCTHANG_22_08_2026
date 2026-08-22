#include <iostream>
#include <string>
#include <vector>
using namespace std;

class nhanvien {
private:
    string manv;
    string hovaten;
    string diachi;
    double luong;
    double heso;
public:
    void nhap() {
        cout << "Nhap ho va ten: ";
        getline(cin, hovaten);
    }
    void inra() {
        cout << "Ho va ten: " << hovaten << "\n";
    }
};

typedef nhanvien nv;

int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();

    // ===== VECTOR =====
    cout << "\n=== CACH 1: VECTOR ===\n";
    vector<nv> ds(n);
    for (int i = 0; i < n; i++) {
        ds[i].nhap();
    }
    for (int i = 0; i < n; i++) {
        ds[i].inra();
    }

    // ===== MẢNG ĐỘNG =====
    cout << "\n=== CACH 2: MANG DONG ===\n";
    nv *dsnv2 = new nv[n];
    for (int i = 0; i < n; i++) {
        dsnv2[i].nhap();
    }
    for (int i = 0; i < n; i++) {
        dsnv2[i].inra();
    }
    delete[] dsnv2;

    // ===== MẢNG TĨNH =====
    cout << "\n=== CACH 3: MANG TINH ===\n";
    nv dsnv3[100]; // cố định 100 phần tử, nhập tối đa n
    for (int i = 0; i < n; i++) {
        dsnv3[i].nhap();
    }
    for (int i = 0; i < n; i++) {
        dsnv3[i].inra();
    }

    return 0;
}
