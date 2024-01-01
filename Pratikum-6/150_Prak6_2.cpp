#include <iostream>
#include <string>
using namespace std;

struct Hiu {
    string nama;
    string buahFavorit;
};

int main() {
    int N;
    cout << "Masukkan jumlah biodata hiu: ";
    cin >> N;
    Hiu dataHiu[N];

    for (int i = 0; i < N; ++i) {
        cin >> dataHiu[i].nama;
        cin >> dataHiu[i].buahFavorit;
    }

    cout << "Nama hiu yang suka makan tomat:\n";
    for (int i = 0; i < N; ++i) {
        if (dataHiu[i].buahFavorit == "Tomato") {
            cout << dataHiu[i].nama << endl;
        }
    }

    return 0;
}
