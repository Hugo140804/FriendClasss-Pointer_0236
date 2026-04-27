#include <iostream>
using namespace std;

class LayangLayang;

class BelahKetupat;
class BelahKetupat {
private:
    float diagonal1, diagonal2, sisi;
 
public:
        void input() {
        cout << "=== Input Belah Ketupat ===" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> diagonal1;
        cout << "Masukkan diagonal 2 : ";
        cin >> diagonal2;
        cout << "Masukkan panjang sisi : ";
        cin >> sisi;
    }
        float luas() {
        return 0.5 * diagonal1 * diagonal2;
        }
        float keliling() {
        return 4 * sisi;
        }
    }

    float kelilingLayangLayang() {

        void output() {
        cout << "\n=== Output Belah Ketupat ===" << endl;
        cout << "Diagonal 1 : " << diagonal1 << endl;
        cout << "Diagonal 2 : " << diagonal2 << endl;
        cout << "Sisi       : " << sisi << endl;
        cout << "Luas       : " << luas() << endl;
        cout << "Keliling   : " << keliling() << endl;
    }
};

class LayangLayang {
private:
    float diagonal1, diagonal2, sisiPendek, sisiPanjang;
 
public:
        void input() {
        cout << "=== Input Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> diagonal1;
        cout << "Masukkan diagonal 2 : ";
        cin >> diagonal2;
        cout << "Masukkan sisi pendek : ";
        cin >> sisiPendek;
        cout << "Masukkan sisi panjang : ";
        cin >> sisiPanjang;
    }
        float luas() {
        return 0.5 * diagonal1 * diagonal2;
    }
        friend float BelahKetupat::kelilingLayangLayang(LayangLayang &ll);
            void output(float keliling) {
        cout << "\n=== Output Layang-Layang ===" << endl;
        cout << "Diagonal 1   : " << diagonal1 << endl;
        cout << "Diagonal 2   : " << diagonal2 << endl;
        cout << "Sisi pendek  : " << sisiPendek << endl;
        cout << "Sisi panjang : " << sisiPanjang << endl;
        cout << "Luas         : " << luas() << endl;
        cout << "Keliling     : " << keliling << endl;
    }
};


