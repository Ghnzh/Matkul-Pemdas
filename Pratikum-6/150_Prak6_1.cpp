#include <iostream>
using namespace std;

int hitungVokal(const char *kata) {
    int count = 0;

    while (*kata) {
        char cekHuruf = *kata;

        if (cekHuruf == 'a' || cekHuruf == 'e' || cekHuruf == 'i' || cekHuruf == 'o' || cekHuruf == 'u' ||
            cekHuruf == 'A' || cekHuruf == 'E' || cekHuruf == 'I' || cekHuruf == 'O' || cekHuruf == 'U') {
            count++;
        }   

        kata++;
    }

    return count;
}

int main() {
    string kata;
    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    int result = hitungVokal(kata.c_str());

    cout << result << endl;

    return 0;
}
