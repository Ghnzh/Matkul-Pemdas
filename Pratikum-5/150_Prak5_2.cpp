#include <iostream>

using namespace std;

string fibonaString(int n, string s0, string s1) {
    
    if (n < 0) return "";
    if (n == 0) return s0;
    if (n == 1) return s1;
    
    return fibonaString(n - 1, s0, s1) + fibonaString(n - 2, s0, s1);
    }

int main() {
    int T;
    cout << "Masukkan Jumlah Kasus Uji : ";
    cin >> T;

    int n[T];
    string s0[T];
    string s1[T];

    for (int i = 0; i < T; i++) {
        cout<< "case " << i + 1 << ": ";
        cin >> n[i] >> s0[i] >> s1[i];
    }
    
    for (int caseNum = 0; caseNum < T; caseNum++) {

        string result = fibonaString(n[caseNum], s0[caseNum], s1[caseNum]);
        cout << "Case #" << caseNum + 1 << ": " << result << endl;

    }

    return 0;
}
