#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Input Angka : ";
    cin >> N;

    if (N >= 1 && N <= 20) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;
        }
    } else {
        cout << "Masukan tidak sesuai batasan (1 <= N <= 20)" << endl;
    }

    return 0;
}
