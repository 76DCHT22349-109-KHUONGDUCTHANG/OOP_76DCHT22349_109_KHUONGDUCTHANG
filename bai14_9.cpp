#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class nguoi {
protected:
    string hoten;
    int namsinh;
public:
    nguoi() {
        hoten = "";
        namsinh = 0;
    }
    nguoi(string hoten, int namsinh) {
        this->hoten = hoten;
        this->namsinh = namsinh;
    }
    void nhap() {
        cout << "Nhap hoten: ";
        getline(cin, hoten);
        cout << "Nhap namsinh: ";
        cin >> namsinh;
        cin.ignore();
    }
    void xuat() {
        cout << hoten << " " << namsinh;
    }
};

class SinhVien : public nguoi {
private:
    string msv;
    float dtb;
public:
    SinhVien() : nguoi() {
        msv = "";
        dtb = 0;
    }
    SinhVien(string hoten, int namsinh, string msv, float dtb) : nguoi(hoten, namsinh) {
        this->msv = msv;
        this->dtb = dtb;
    }
    void nhap() {
        nguoi::nhap();
        cout << "Nhap msv: ";
        getline(cin, msv);
        cout << "Nhap dtb: ";
        cin >> dtb;
        cin.ignore();
    }
    void xuat() {
        nguoi::xuat();
        cout << " " << msv << " " << dtb << endl;
    }
    float getDTB() const {
        return dtb;
    }
};

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();
    vector<SinhVien> ds(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i+1 << ":\n";
        ds[i].nhap();
    }
    sort(ds.begin(), ds.end(), [](SinhVien a, SinhVien b) {
        return a.getDTB() > b.getDTB();
    });
    cout << "nDanh sach sinh vien sau khi sap xep:\n";
    for (auto sv : ds) {
        sv.xuat();
    }
    return 0;
}
