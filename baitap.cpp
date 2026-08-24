#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class nhanvien {
private:
    string hovaten;
public:
    nhanvien() {
        hovaten = "";
    }

    nhanvien(string ten) {
        hovaten = ten;
    }

    void nhap() {
        cout << "Nhap ho va ten: ";
        getline(cin, hovaten);
    }

    void inra() const {
        cout << left << setw(25) << hovaten << endl;
    }
};

typedef nhanvien nv;

int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore(); 

    nv *dsnv2 = new nv[n];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin nhan vien thu " << i + 1 << ":\n";
        string ten;
        cout << "Nhap ho va ten: ";
        getline(cin, ten);
        dsnv2[i] = nv(ten); 
    }

    cout << "\nDANH SACH NHAN VIEN\n";
    cout << left << setw(25) << "Ho Va Ten" << endl;
    
    for (int i = 0; i < n; i++) {
        dsnv2[i].inra();
    }

    delete[] dsnv2;

    return 0;
}
