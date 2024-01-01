#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(const string& str1, const string& str2) {

    string sortedStr1 = str1;
    string sortedStr2 = str2;
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());

    return sortedStr1 == sortedStr2;
}

int main() {
    string string1, string2;

    cout << "Masukkan string pertama: ";
    cin >> string1;

    cout << "Masukkan string kedua: ";
    cin >> string2;

    if (string1 == string2) {
        cout << "Kedua string bukan anagram." << endl;
    } else if (isAnagram(string1, string2)) {
        cout << "Kedua string adalah anagram." << endl;
    } else {
        cout << "Kedua string bukan anagram." << endl;
    }

    return 0;
}
