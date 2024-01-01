#include <iostream>
using namespace std;

int main() {
    int nomorMenu;
    cout << "Masukkan Nomor Menu" << endl;
    cin >> nomorMenu;
    if (nomorMenu == 1) {
        cout << "Nasi Goreng" << endl;
    } else if (nomorMenu == 2) {
        cout << "Ayam Goreng" << endl;
    } else if (nomorMenu == 3) {
        cout << "Mie Goreng" << endl;
    } else if (nomorMenu == 4) {
        cout << "Burger" << endl;
    } else {
        cout << "Menu Tidak Tersedia" << endl;
    }
    return 0;
}