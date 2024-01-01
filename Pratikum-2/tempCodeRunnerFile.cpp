#include <iostream>
#include <string>
using namespace std;

int main() {
    string angka;

    cout << "Masukkan Angka: ";
    cin >> angka;

    if (angka == "0") {
        cout << "Nol" << endl;
    } else if (angka[0] == '0') {
        cout << "Leading Zero" << endl;
    } else if (angka[0] == '-') {
        bool isNegative = true;
        for (size_t i = 1; i < angka.length(); ++i) {
            if (!isdigit(angka[i])) {
                isNegative = false;
                break;
            }
            if (i == 1 && angka[i] == '0') {
                isNegative = false;
                break;
            }
        }

        if (isNegative && angka.length() > 1) {
           cout << "bilangan bulat negatif tanpa leading zero." << endl;
        } else {
           cout << "terdapat leading zero setelah '-'." << endl;
        }
    } else {
        cout << "bilangan bulat positif" << endl;   
    }

    return 0;
}
