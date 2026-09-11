#include <iostream>
using namespace std;

class SoPhuc {
private:
    double thuc;
    double ao;
public:
    SoPhuc() {
        thuc = 0;
        ao = 0;
    }

    SoPhuc(double t, double a) {
        thuc = t;
        ao = a;
    }

    ~SoPhuc() {}

    friend istream& operator>>(istream& in, SoPhuc& sp) {
        in >> sp.thuc >> sp.ao;
        return in;
    }

    friend ostream& operator<<(ostream& out, const SoPhuc& sp) {
        out << sp.thuc << (sp.ao >= 0 ? "+" : "") << sp.ao << "i";
        return out;
    }

    SoPhuc operator+(const SoPhuc& sp) {
        return SoPhuc(thuc + sp.thuc, ao + sp.ao);
    }

    SoPhuc operator-(const SoPhuc& sp) {
        return SoPhuc(thuc - sp.thuc, ao - sp.ao);
    }

    SoPhuc operator*(const SoPhuc& sp) {
        return SoPhuc(thuc * sp.thuc - ao * sp.ao, thuc * sp.ao + ao * sp.thuc);
    }

    SoPhuc operator/(const SoPhuc& sp) {
        double mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
        return SoPhuc((thuc * sp.thuc + ao * sp.ao) / mau,
                      (ao * sp.thuc - thuc * sp.ao) / mau);
    }
};

int main() {
    SoPhuc a, b;
    cin >> a >> b;

    cout << "a+b = " << a + b << endl;
    cout << "a-b = " << a - b << endl;
    cout << "a*b = " << a * b << endl;
    cout << "a/b = " << a / b << endl;

    return 0;
}
