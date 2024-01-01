#include <iostream>
using namespace std;

int main() {
	
float n_tugas, n_kuis, n_uts, n_uas, nilai_akhir;

// input nilai tugas, kuis, dan uts
cout << "Masukkan nilai tugas: ";
cin >> n_tugas;
cout << "Masukkan nilai kuis: ";
cin >> n_kuis;
cout << "Masukkan nilai uts: ";
cin >> n_uts;
cout << "Masukkan nilai uas: ";
cin >> n_uas;

// hitung nilai akhir
nilai_akhir = (0.2 * n_tugas) + (0.2 * n_kuis) + (0.3 * n_uts) + (0.3 * n_uas);

// output nilai akhir dan predikat
cout << "Nilai akhir: " << nilai_akhir << endl;

return 0;
}





