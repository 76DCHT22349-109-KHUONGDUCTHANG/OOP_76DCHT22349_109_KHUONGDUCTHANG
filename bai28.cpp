#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Matran {
private:
    int sohang;
    int socot;
    vector<vector<int> > phanTu;

public:
    Matran(int sohang, int socot) {
        this->sohang = sohang;
        this->socot = socot;
        this->phanTu = vector<vector<int> >(sohang, vector<int>(socot));
    }

    void nhap() {
        for (int i = 0; i < sohang; i++) {
            for (int j = 0; j < socot; j++) {
                cout << "Nhap vao hang " << i << " cot " << j << ": ";
                cin >> phanTu[i][j];
            }
        }
    }

    void inra() {
        for (int i = 0; i < sohang; i++) {
            for (int j = 0; j < socot; j++) {
                cout << setw(5) << phanTu[i][j];
            }
            cout << endl;
        }
    }

    void tong(const Matran &b) {
        cout << "Ket qua tong hai ma tran:\n";
        for (int i = 0; i < sohang; i++) {
            for (int j = 0; j < socot; j++) {
                cout << setw(5) << (phanTu[i][j] + b.phanTu[i][j]);
            }
            cout << endl;
        }
    }
};

int main() {
    int n, m;
    cout << "Nhap vao so hang: ";
    cin >> n;
    cout << "Nhap vao so cot: ";
    cin >> m;

    Matran a(n, m), b(n, m);
    cout << "Nhap ma tran A:\n";
    a.nhap();
    a.inra();
    cout << "Nhap ma tran B:\n";
    b.nhap();
    b.inra();

    cout << "Tong hai ma tran la:\n";
    a.tong(b);

    return 0;
}
