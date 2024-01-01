#include <iostream>

using namespace std;

void cariTengah(int bilangan[], int n) {

    cout << "Tiga bilangan tengah adalah: ";
    cout << bilangan[n / 2 - 1] << bilangan[n / 2] << bilangan[n / 2 + 1];

}

int main() {
    int n;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    int bilangan[n];

    cout << "Masukkan " << n << " bilangan: ";
    for (int i = 0; i < n; ++i) {
        cin >> bilangan[i];
    }

    cariTengah(bilangan, n);

    return 0;
}



// codingan lama

// #include <iostream>

// using namespace std;

// void cariTengah() {

// }

// int main() {
//     int n;

//     cout << "Masukkan jumlah bilangan: ";
//     cin >> n;

//     int bilangan[n];

//     cout << "Masukkan " << n << " bilangan: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> bilangan[i];
//     }

//     int mid1 = bilangan[n / 2 - 1];
//     int mid2 = bilangan[n / 2];
//     int mid3 = bilangan[n / 2 + 1];

//     cout << "Tiga bilangan tengah adalah: " << mid1 << mid2 << mid3;

//     return 0;
// }
