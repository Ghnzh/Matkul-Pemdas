#include <iostream>
using namespace std;

int main() {
    int kandang;
    int total_binatang = 0;

    cout << "Berapa kandang: " << endl;
    cin >> kandang;

    cout << "Berapa Hewan Setiap Kandang = " << endl;
    for (int input = 0; input < kandang; input++) {
        int jumlah_hewan;
        cin >> jumlah_hewan;
        total_binatang += jumlah_hewan;
    }

    cout << "Total binatang : " << total_binatang << endl;

    return 0;
}
