#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Masukkan ukuran matriks (N x N): ";
    cin >> N;

    int matrix[N][N];
    int putarMatrix[N][N];

    cout << "Masukkan elemen-elemen matriks " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Matriks[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matriks asli:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            putarMatrix[i][j] = matrix[N - 1 - j][i];
        }
    }

    cout << "Matriks setelah rotasi 90 derajat searah jarum jam:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << putarMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
