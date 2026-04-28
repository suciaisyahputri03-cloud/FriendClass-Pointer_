#include <iostream>
using namespace std;

class BelahKetupat; // forward declaration

class LayangLayang {
private:
    float d1, d2;   // diagonal
    float a, b;     // sisi

public:
    void input() {
        cout << "=== Layang-Layang ===\n";
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi a: ";
        cin >> a;
        cout << "Masukkan sisi b: ";
        cin >> b;
    }

    float luas() {
        return (d1 * d2) / 2;
    }

    float keliling() {
        return 2 * (a + b);
    }

    void output() {
        cout << "\nLuas Layang-Layang: " << luas() << endl;
        cout << "Keliling Layang-Layang: " << keliling() << endl;
    }

    // friend class
    friend class BelahKetupat;
};

class BelahKetupat {
private:
    float d1, d2;
    float sisi;

public:
    void input() {
        cout << "\n=== Belah Ketupat ===\n";
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi: ";
        cin >> sisi;
    }

    float luas() {
        return (d1 * d2) / 2;
    }

    float keliling() {
        return 4 * sisi;
    }

    // METHOD FRIEND: akses data private LayangLayang
    void kelilingLayangLayang(LayangLayang &ll) {
        cout << "\nKeliling Layang-Layang (diakses dari BelahKetupat): "
             << ll.keliling() << endl;
    }

    void output() {
        cout << "\nLuas Belah Ketupat: " << luas() << endl;
        cout << "Keliling Belah Ketupat: " << keliling() << endl;
    }
};

int main() {
    LayangLayang ll;
    BelahKetupat bk;

    ll.input();
    bk.input();

    ll.output();
    bk.output();

    // akses friend
    bk.kelilingLayangLayang(ll);

    return 0;
}