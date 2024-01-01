#include <iostream>
using namespace std;

int main() {
    int tebakan, jawaban;
    int percobaan = 0;
    int maksimal_tebakan = 15;
    
    cout << "Masukkan jawaban : " << endl;
    cin >> jawaban;

    if (jawaban > 0 && jawaban < 100) {
            
        while (percobaan < maksimal_tebakan) {
            cout << "Masukkan Tebakan : " << endl;
            cin >> tebakan;
            percobaan++;

            if (tebakan < 1 && tebakan > 100) {
                cout << "Tebakan harus antara 1 dan 100. Coba lagi." << endl;
                continue;
            }

            if (tebakan < jawaban) {
                cout << "terlalu kecil" << endl;
            } else if (tebakan > jawaban) {
                cout << "terlalu besar" << endl;
            } else {
                cout << "nah bener lu gw maapin" << endl;
                break;
            }
        }

        if (percobaan == maksimal_tebakan) {
            cout << "Anda Harus Ganti Rugi" << endl;
        }

    } else {
        cout << "Min Jawaban 1 & Maks Jawaban 100" << endl;
    }
    return 0;
}
